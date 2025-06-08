classdef (StrictDefaults)FrameSynchronizer < comm.internal.Helper
    %FrameSynchronizer Frame Synchronizer
    %   FS = comm.FrameSynchronizer creates a frame synchronizer object,
    %   FS, that detects a frame which starts with the specified preamble
    %   in the input and outputs this frame of the specified length. A
    %   preamble is a sequence of symbols used in packet based
    %   communications systems to indicate the start of a packet.
    %
    %   FS = comm.FrameSynchronizer(Name=Value) creates a frame
    %   synchronizer object, FS, with the specified property Name set to
    %   the specified Value. You can specify additional name-value
    %   arguments in any order as (Name1=Value1,...,NameN=ValueN).
    %
    %   This System object converts fixed-size or variable-size inputs into
    %   fixed-size output frames with a specified length, which is the
    %   first output when the object runs. The second output when the
    %   object runs is a boolean signal indicating if the first output is a
    %   valid frame. A valid frame at the first output always starts with a
    %   preamble.
    %
    %   Step method syntax:
    %
    %   [FRAME, VALID] = step(FS,X) returns OutputLength samples in FRAME
    %   and true or false in VALID to indicate if the frame FRAME is valid
    %   or not, respectively. When VALID is true, FRAME contains data from
    %   the current or previous input and starts with the input samples
    %   that best match the specified preamble in Preamble property. When
    %   VALID is false, FRAME contains zeros. To detect the preamble in the
    %   input, the System object computes the cross-correlation of the
    %   preamble and the input X. To confirm a preamble match when the
    %   preamble and input X are both real-valued, the cross-correlation
    %   value must be above the specified Threshold. If either the preamble
    %   or input X is complex-valued, the abs() of the cross-correlation
    %   value must be above the specified Threshold to confirm a preamble
    %   match. If multiple matches are found within input X, the largest
    %   value is used to detect a preamble and the start of a frame.
    %
    %   System objects may be called directly like a function instead of
    %   using the step method. For example, y = step(obj, x) and y = obj(x)
    %   are equivalent.
    %
    %   FrameSynchronizer methods:
    %
    %   step      - Detect the preamble in input signal and output a frame
    %   release   - Allow property value and input characteristic changes
    %   clone     - Create FrameSynchronizer object with same property values
    %   isLocked  - Locked status (logical)
    %   reset     - Reset states of FrameSynchronizer object
    %
    %   FrameSynchronizer properties:
    %
    %   Preamble          - Preamble to detect
    %   Threshold         - Detection threshold
    %   OutputLength      - Output frame length
    %
    %   % Example:
    %   reset(RandStream.getGlobalStream);
    %   prb = pskmod([2 1 3 0]', 4, pi/4);
    %   sig = [rand(2,1,'like',1i); prb; rand(6,1,'like',1i)];
    %   rx = awgn(sig, 20, 'measured');
    %   fs = comm.FrameSynchronizer(Preamble=prb,Threshold=3,OutputLength=10);
    %   [rxFrame, valid] = fs(rx)
    %
    %   See also comm.PreambleDetector, comm.CarrierSynchronizer,
    %   comm.SymbolSynchronizer.

    % Copyright 2016-2022 The MathWorks, Inc.
    
    %#codegen
    
    properties (Nontunable)
        %Preamble Preamble
        %   Specify the preamble to detect in input as a numeric, real or
        %   complex column vector. The default value is [1+1i, 1-1i].
        Preamble {mustBeFloat, mustBeFinite} = [1+1i; 1-1i];
        %OutputLength Output length
        %   Specify the output length in samples as a numeric, real,
        %   positive integer scalar. The default value of this property is
        %   100.
        OutputLength (1,1) {mustBeNumeric, mustBeReal, mustBeInteger, mustBePositive} = 100
    end

    % Public, tunable properties
    properties
        %Threshold Detection threshold
        %   Specify the detection threshold as a real-valued nonnegative
        %   numeric scalar. When the cross-correlation of Preamble and
        %   input, or the abs() of cross-correlation of Preamble and input
        %   if either is complex-valued, is equal to or greater than
        %   Threshold, a preamble is detected. The default value is 3. This
        %   property is tunable.
        Threshold (1,1) {mustBeFloat, mustBeReal, mustBeFinite, mustBeNonnegative} = 3;
    end

    properties (Constant, Access = private)
        % 2 because, at most 1 in buffer, & at most 1 in input
        pPrbIdxBufferLength = 2; % Preamble start index buffer length
    end
    
    properties (Access = private, Nontunable)
        pPrbLenOffset       % offset to get Preamble start index from end index
        pPreambleDetector   % Preamble Detector object
        pDataBuffer         % Data buffer object
        pDataBufferLength   % Data buffer length
        pPrbStartIdxBuffer  % Preamble start idx buffer object
    end
    
    properties (Access = private)
        pLastDtMt           % Detection metric for the last preamble in the pPrbStartIdxBuffer
        pFirstCall = true
    end

    methods
        function obj = FrameSynchronizer(varargin)
            setProperties(obj, nargin, varargin{:});
        end

        function set.Preamble(obj, prb)
            coder.internal.errorIf(isscalar(prb) || ~iscolumn(prb), ...
                'comm:FrameSynchronizer:InvalidPreambleSize');
            obj.Preamble = prb;
        end
    end
    
    methods (Access = protected)
        function validatePropertiesImpl(obj)
            coder.internal.errorIf(obj.OutputLength < length(obj.Preamble), ...
                'comm:FrameSynchronizer:OutFrmLenLenLessPrbLen');
        end
        
        function validateInputsImpl(obj, varargin)
            % Only floating-point supported for now.
            validateattributes(varargin{1}, {'double','single'}, ...
                {'finite', 'column'}, [class(obj) '.' 'Input'], 'Input');

            if ~obj.pFirstCall
                coder.internal.errorIf(length(varargin{1}) > ...
                    (obj.OutputLength + length(obj.Preamble)), ...
                    'comm:FrameSynchronizer:InvalidInputLength');
            end
        end
        
        function setupImpl(obj, x)
            obj.pPrbLenOffset      = length(obj.Preamble) - 1;
            obj.pPreambleDetector  = comm.PreambleDetector(obj.Preamble, ...
                Threshold=obj.Threshold);
            obj.pDataBufferLength  = 2*(obj.OutputLength + length(obj.Preamble)) - 1;
            obj.pDataBuffer        = dsp.AsyncBuffer(obj.pDataBufferLength);
            obj.pPrbStartIdxBuffer = dsp.AsyncBuffer(obj.pPrbIdxBufferLength);
            obj.pLastDtMt          = 0;
            obj.pFirstCall         = false;
            setup(obj.pDataBuffer, cast(1,'like',x));
            setup(obj.pPrbStartIdxBuffer, 1);
        end
        
        function resetImpl(obj)
            % Initialize internal buffer and related properties
            obj.pDataBuffer.reset();
            obj.pPrbStartIdxBuffer.reset();
            obj.pLastDtMt = 0;
        end
        
        function [y, validFrm] = stepImpl(obj, x)

            % Initialization
            dataBuffer = obj.pDataBuffer;
            nData = dataBuffer.NumUnreadSamples;
            prbSIdxBuffer = obj.pPrbStartIdxBuffer;
            prbLenOffset = obj.pPrbLenOffset;
            outputLength = obj.OutputLength;

            % Detect Preamble
            [idx, dtMt] = obj.pPreambleDetector(x);
            
            % Process the preamble in the current input
            if ~isempty(idx)
                nPrbSIdx = prbSIdxBuffer.NumUnreadSamples;
                if (nPrbSIdx > 0)
                    [~, maxIdx] = max(dtMt(idx));
                    prbSIdx = prbSIdxBuffer.peek();
                    % Store current preamble only if there is at least ILU
                    % samples between the last preamble in the buffer and
                    % the preamble in the current input.
                    % nSamp - number of sample in the data buffer starting
                    % from the last preamble start.
                    % nSamp = nData - prbSetxu(nPrbSetxu) + 1;
                    % nInput - number of samples in the current input until
                    % the start of the preamble represented by maxIdx
                    % nInput = idx(maxIdx) - obj.pPrbLenOffset - 1;
                    % Number of samples between the start of the last in
                    % the data buffer and the start of the preamble in the
                    % current input = nSamp + nInput
                    if (nData - prbSIdx(nPrbSIdx) + idx(maxIdx) - prbLenOffset >= outputLength)
                        prbSIdxBuffer.write(double(nData) + idx(maxIdx) - prbLenOffset);
                        obj.pLastDtMt = dtMt(maxIdx);
                        % else
                        % Skip the preamble in this input
                    end
                    
                else
                    [~, maxIdx] = max(dtMt(idx));
                    prbSIdxBuffer.write(double(nData) + idx(maxIdx) - prbLenOffset);
                    obj.pLastDtMt = dtMt(maxIdx);
                end
            end

            % Store the current input into the buffer
            dataBuffer.write(x(:));

            % Generate output            
            nPrbSIdx = prbSIdxBuffer.NumUnreadSamples;
            if (nPrbSIdx > 0)
                % Data buffer has a preamble

                % Ensure that a preamble is at the top of the data
                % buffer
                prbSIdx = prbSIdxBuffer.read();
                if (prbSIdx(1) > 1)
                    % Throw away prbSetxu(1)-1 samples from data buffer &
                    % adjust prbSetxuBuffer such that first element is 1
                    dataBuffer.read(prbSIdx(1)-1);
                    prbSIdx = prbSIdx - prbSIdx(1) + 1;
                end
                prbSIdxBuffer.write(prbSIdx);

                if (dataBuffer.NumUnreadSamples >= outputLength)
                    % Enough data in data buffer to output a frame

                    if comm.internal.utilities.isSim()
                        y = dataBuffer.read(outputLength);
                    else
                        y = coder.nullcopy(zeros(outputLength, 1, 'like', x));
                        y(:,1) = dataBuffer.read(outputLength);
                    end
                    validFrm = true;

                    % Discard first prbSetxu & adjust remaining values
                    prbSIdx = prbSIdxBuffer.read();
                    prbSIdx(1) = [];
                    if isempty(prbSIdx)
                        % Data buffer doesn't have any preamble. Throw away
                        % all the data except for the last PreambleLength-1
                        % samples as they could form a Preamble
                        nData = dataBuffer.NumUnreadSamples;
                        if (nData > prbLenOffset)
                            dataBuffer.read(nData - prbLenOffset);                            
                        end
                    else
                        % Reduce prbSetxu by -
                        % OutputLength: Number of samples just read from dataBuffer
                        % prbSetxu(1)-1: Shift next preamble to the top of
                        % the data buffer
                        prbSIdx = prbSIdx - outputLength;
                        if (prbSIdx(1) > 1)
                            dataBuffer.read(prbSIdx(1) - 1);
                            prbSIdx = prbSIdx - (prbSIdx(1) - 1);
                        end
                        prbSIdxBuffer.write(prbSIdx);
                        
                        % Adjust dataBuffer to have only the necessary data
                        nData = dataBuffer.NumUnreadSamples;
                        if (nData > (outputLength + prbLenOffset))
                            data = dataBuffer.read();
                            dataBuffer.write([data(1:outputLength); ...
                                data((nData-prbLenOffset+1):nData)]);
                        end
                    end
                else
                    % Not enough data in data buffer to output a frame.
                    % Output all-zeros.
                    y = zeros(outputLength, 1, 'like', x);
                    validFrm = false;
                end

            else
                % Data buffer has no preamble

                % Throw away all the data in the data buffer, except for
                % the last PreambleLength-1 samples as they could form a
                % Preamble
                nData = dataBuffer.NumUnreadSamples;
                if (nData > prbLenOffset)
                    dataBuffer.read(nData - prbLenOffset);
                end

                % Output all-zeros.
                y = zeros(outputLength, 1, 'like', x);
                validFrm = false;

            end
        end
        
        function releaseImpl(obj)
            obj.pFirstCall = true;
        end
        
        function flag = isInactivePropertyImpl(~, ~)
            flag = false;
        end
        
        function s = saveObjectImpl(obj)
            s = saveObjectImpl@matlab.System(obj);
            if isLocked(obj)
                s.pPrbLenOffset      = obj.pPrbLenOffset;
                s.pDataBufferLength  = obj.pDataBufferLength;
                s.pLastDtMt          = obj.pLastDtMt;
                s.pFirstCall         = obj.pFirstCall;
                s.pPreambleDetector  = matlab.System.saveObject(obj.pPreambleDetector);
                s.pDataBuffer        = matlab.System.saveObject(obj.pDataBuffer);
                s.pPrbStartIdxBuffer = matlab.System.saveObject(obj.pPrbStartIdxBuffer);
            end
        end
        
        function loadObjectImpl(obj, s, wasLocked)
            if wasLocked
                obj.pPrbLenOffset      = s.pPrbLenOffset;
                obj.pDataBufferLength  = s.pDataBufferLength;
                obj.pLastDtMt          = s.pLastDtMt;
                obj.pFirstCall         = s.pFirstCall;
                obj.pPreambleDetector  = matlab.System.loadObject(s.pPreambleDetector);
                obj.pDataBuffer        = matlab.System.loadObject(s.pDataBuffer);
                obj.pPrbStartIdxBuffer = matlab.System.loadObject(s.pPrbStartIdxBuffer); 
            end
            loadObjectImpl@matlab.System(obj, s);
        end
        
        function num = getNumOutputsImpl(~)
            num = 2;
        end
        
        function flag = isInputSizeMutableImpl(~,~)
            flag = true;
        end
        
        function varargout = isOutputFixedSizeImpl(~)
            varargout = {true, true};            
        end
        
        function varargout = getOutputSizeImpl(obj)
            % Return size for each output port
            
            % Input must be empty, scalar or column vector.
            inSigMaxDim = propagatedInputSize(obj, 1);
            coder.internal.errorIf((length(inSigMaxDim) ~= 2) || ...
                (inSigMaxDim(2) ~= 1), 'comm:FrameSynchronizer:InvalidInputDims');
            
            if propagatedInputFixedSize(obj, 1)
                coder.internal.errorIf(inSigMaxDim(1) > ...
                    (obj.OutputLength + length(obj.Preamble)), ...
                    'comm:FrameSynchronizer:InvalidInputLength');
            end

            varargout = {[obj.OutputLength 1], [1 1]};
        end
        
        function varargout = getOutputDataTypeImpl(obj)
            varargout = {propagatedInputDataType(obj, 1), 'logical'};            
        end
        
        function varargout = isOutputComplexImpl(obj)
            varargout = {propagatedInputComplexity(obj, 1), false};            
        end
        
        function icon = getIconImpl(~)
            icon = sprintf('Frame\nSynchronizer');
        end
        
        function varargout = getOutputNamesImpl(~)
            varargout = {'Frame', 'Valid'};
        end
    end
    
    methods(Static, Access = protected)
        function header = getHeaderImpl
            header = matlab.system.display.Header('comm.FrameSynchronizer', ...
                'Title', 'comm:FrameSynchronizer:BlockMaskTitle', ...
                'Text', 'comm:FrameSynchronizer:BlockMaskDescription');
        end
        
        function groups = getPropertyGroupsImpl
            propsList = {'Preamble', 'Threshold', 'OutputLength'};

            paramsList = cell(1,numel(propsList));
            for ind = 1:numel(propsList)
                propID = ['comm:FrameSynchronizer:',propsList{ind}];
                paramsList{ind} = matlab.system.display.internal.Property(...
                    propsList{ind},'Description',propID);
            end

            params = matlab.system.display.Section(...
                'Title', getString(message('comm:FrameSynchronizer:Parameters')), ...
                'PropertyList',paramsList);

            groups = params;
        end
    end
    
end
