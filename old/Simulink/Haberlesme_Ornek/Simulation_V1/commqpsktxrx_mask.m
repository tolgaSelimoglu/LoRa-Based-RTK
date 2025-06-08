function varargout = commqpsktxrx_mask(block, action, varargin)
% commqpsktxrx_mask  Validate input parameters of the Model Parameters
% block, and then update the parameters based on inputs

%   Copyright 2011-2015 The MathWorks, Inc.

myException = [];
channelItems = 2:8;
cfcItems = 9:11;
fineItems = 12:13;
timingItems = 14:15;
switch(action)
    
    case 'cbShowHideSettingOptions'        
        settingCtrl = get_param(block, 'SettingCtrl'); 
        Vis = get_param(block, 'maskVisibilities');
        En = get_param(block, 'maskEnables');
        
        switch settingCtrl
            
            case 'Channel impairment settings'                
                channelItems = 2:4;
                commqpsktxrx_mask(block, 'cbShowHideDelayOptions'); % takes care of items 5:8
                Vis         = get_param(block, 'maskVisibilities');% Update Vis
                En          = get_param(block, 'maskEnables');% Update En
                rest = [cfcItems fineItems timingItems];
                Vis(rest) = mat2cell(repmat('off',length(Vis(rest)),1),ones(size(Vis(rest))),3);
                En(rest) = mat2cell(repmat('off',length(En(rest)),1),ones(size(En(rest))),3);
                Vis(channelItems) = mat2cell(repmat('on',length(Vis(channelItems)),1),ones(size(Vis(channelItems))),2);
                En(channelItems) = mat2cell(repmat('on',length(En(channelItems)),1),ones(size(En(channelItems))),2);                
            
            case 'Coarse frequency compensation settings'                
                commqpsktxrx_mask(block, 'cbShowHideCFCOptions'); % takes care of items 10:11
                Vis         = get_param(block, 'maskVisibilities');% Update Vis
                En          = get_param(block, 'maskEnables');% Update En
                hidden = [channelItems fineItems timingItems];
                Vis(hidden) = mat2cell(repmat('off',length(Vis(hidden)),1),ones(size(Vis(hidden))),3);
                En(hidden) = mat2cell(repmat('off',length(En(hidden)),1),ones(size(En(hidden))),3);
                shown = 9; % CFC algorithm
                Vis(shown) = mat2cell(repmat('on',length(Vis(shown)),1),ones(size(Vis(shown))),2);
                En(shown) = mat2cell(repmat('on',length(En(shown)),1),ones(size(En(shown))),2);
           
            case 'Fine frequency compensation settings'                
                hidden = [channelItems cfcItems timingItems];
                Vis(hidden) = mat2cell(repmat('off',length(Vis(hidden)),1),ones(size(Vis(hidden))),3);
                En(hidden) = mat2cell(repmat('off',length(En(hidden)),1),ones(size(En(hidden))),3);
                Vis(fineItems) = mat2cell(repmat('on',length(Vis(10:11)),1),ones(size(Vis(fineItems))),2);
                En(fineItems) = mat2cell(repmat('on',length(En(10:11)),1),ones(size(En(fineItems))),2);
                
            case 'Timing recovery settings'                
                hidden = [channelItems cfcItems fineItems];
                Vis(hidden) = mat2cell(repmat('off',length(Vis(hidden)),1),ones(size(Vis(hidden))),3);
                En(hidden) = mat2cell(repmat('off',length(En(hidden)),1),ones(size(En(hidden))),3);
                Vis(timingItems) = mat2cell(repmat('on',length(Vis(timingItems)),1),ones(size(Vis(timingItems))),2);
                En(timingItems) = mat2cell(repmat('on',length(En(timingItems)),1),ones(size(En(timingItems))),2);
                
            otherwise
                % No other actions to take
                
        end
    
        set_param(block, 'MaskEnables', En, 'MaskVisibilities', Vis);
    
    case 'cbShowHideCFCOptions'
        settingCtrl = get_param(block, 'SettingCtrl');
        if strcmp(settingCtrl, 'Coarse frequency compensation settings')
      
          Vis = get_param(block, 'maskVisibilities');
          En = get_param(block, 'maskEnables');
          algorithm = get_param(block, 'CFCAlgorithm'); 
          oldEnOptions  = strcat(En{10}, En{11});

          selection = strcmp(algorithm, 'FFT-based');
          hidden = [channelItems 11-selection fineItems timingItems];

          Vis(hidden) = mat2cell(repmat('off',length(Vis(hidden)),1),ones(size(Vis(hidden))),3);
          En(hidden) = mat2cell(repmat('off',length(En(hidden)),1),ones(size(En(hidden))),3);
          shown = [9 10+selection];
          Vis(shown) = mat2cell(repmat('on',length(Vis(shown)),1),ones(size(Vis(shown))),2);
          En(shown) = mat2cell(repmat('on',length(En(shown)),1),ones(size(En(shown))),2);

          currentEnOptions  = strcat(En{10}, En{11});

          if (~strcmpi(oldEnOptions, currentEnOptions))
             set_param(block, 'MaskEnables', En, 'MaskVisibilities', Vis);
          end
        end
        
    case 'cbShowHideDelayOptions'
        settingCtrl = get_param(block, 'SettingCtrl');
        delayCtrl = get_param(block, 'DelayCtrl');% 4
        Vis         = get_param(block, 'maskVisibilities');
        En          = get_param(block, 'maskEnables');
        oldEnOptions  = strcat(En{6}, En{8});
        if strcmp(settingCtrl, 'Channel impairment settings')
            switch delayCtrl
                
                case 'Ramp'
                    Vis(6:7) = mat2cell(repmat('off',length(Vis(6:7)),1),ones(size(Vis(6:7))),3);
                    En(6:7) = mat2cell(repmat('off',length(En(6:7)),1),ones(size(En(6:7))),3);
                    Vis([5 8]) = mat2cell(repmat('on',length(Vis([5 8])),1),ones(size(Vis([5 8]))),2);
                    En([5 8]) = mat2cell(repmat('on',length(En([5 8])),1),ones(size(En([5 8]))),2);
                case 'Triangle'
                    Vis(5:7) = mat2cell(repmat('on',length(Vis(5:7)),1),ones(size(Vis(5:7))),2);
                    En(5:7) = mat2cell(repmat('on',length(En(5:7)),1),ones(size(En(5:7))),2);
                    Vis{8} = 'off';
                    En{8} = 'off';
                    
                otherwise
                    % No other actions to take
                    
            end
            
            currentEnOptions  = strcat(En{6}, En{8});
            
            if (~strcmpi(oldEnOptions, currentEnOptions))
                set_param(block, 'MaskEnables', En, 'MaskVisibilities', Vis);
            end
        end
    
    case 'init'
        
        myException = updateDelayCtrl(block);
        if (~isempty(myException)), varargout{1} = myException; return; end
        
        DelayCtrl = varargin{1};
        MinDelay = varargin{2};
        MaxDelay = varargin{3};
        DelayStart = varargin{4};
        DelayStep = varargin{5};
        myException = updateDelay(DelayCtrl, MinDelay, MaxDelay, DelayStart, DelayStep);
        if (~isempty(myException)), varargout{1} = myException; return; end
        
        myException = updateEbN0(block);
        if (~isempty(myException)), varargout{1} = myException; return; end
        
        myException = updateFreqOffset(block);
        if (~isempty(myException)), varargout{1} = myException; return; end
        
        myException = updateCFCAlgorithm(block);
        if (~isempty(myException)), varargout{1} = myException; return; end        
        
        myException = updateMaxOffset(block);
        if (~isempty(myException)), varargout{1} = myException; return; end
        
        myException = updateFreqResolution(block);
        if (~isempty(myException)), varargout{1} = myException; return; end        
        
        myException = updateFineFreqNormalizedBW(block);
        if (~isempty(myException)), varargout{1} = myException; return; end
        
        myException = updateFineFreqDampingFactor(block);
        if (~isempty(myException)), varargout{1} = myException; return; end
        
        myException = updateTimeRecNormalizedBW(block);
        if (~isempty(myException)), varargout{1} = myException; return; end
        
        myException = updateTimeRecDampingFactor(block);
        if (~isempty(myException)), varargout{1} = myException; return; end
        
    otherwise
        % No other actions to take
        
end

varargout{1} = myException;

%*********************************************************************
% Function Name:    updateDelayCtrl
% Description:      Set the channel delay to Ramp or Triangle waveform
%*********************************************************************
function myException = updateDelayCtrl(block)
Channelblock = [bdroot ...
        '/AWGN Channel with Frequency Offset & Variable Time Delay'];
myException = updateTgtParamFromPopup(block, ...
    [Channelblock '/Delay Select'], ...
    'Value', {'1', '2'}, 'DelayCtrl');

%*********************************************************************
% Function Name:    updateDelay
% Description:      Set delay configurations to appropriate delay generator
%*********************************************************************
function myException = updateDelay(DelayCtrl, MinDelay, MaxDelay, DelayStart, DelayStep)

myException = [];

Delayblock = [bdroot ...
        '/AWGN Channel with Frequency Offset & Variable Time Delay/Delay Generator'];
% Set the delay configuration for the appropriate Delay Generator block
if (DelayCtrl==1)
    % Ramp Delay
    % Parameter check 
    if isnan(DelayStart) || ~isreal(DelayStart) || DelayStart<=0
        error(message('comm:commQPSK:PositiveDelayStart'));
    end    
    if isnan(DelayStep) || ~isreal(DelayStep) || DelayStep<0
        error(message('comm:commQPSK:NonNegativeDelayStep'));
    end
    % Assign parameter to the block
    try
        set_param([Delayblock '/mVariableRamp/Start'],'Value',num2str(DelayStart));
        set_param([Delayblock '/mVariableRamp/Step'],'Value',num2str(DelayStep));
    catch myException
    end
elseif (DelayCtrl==2)
    % Triangle delay
    % Parameter check 
    if isnan(MinDelay) || ~isreal(MinDelay) || isnan(MaxDelay) || ~isreal(MaxDelay) || isnan(DelayStep) || ~isreal(DelayStep)...
            || MinDelay<0 || MaxDelay<0 || DelayStep<0
        error(message('comm:commQPSK:NonNegativeDelays'));
    end
    if MaxDelay-MinDelay<DelayStep
        error(message('comm:commQPSK:MaxGTMinDelay'));
    end
    DelayPattern = [MinDelay:DelayStep:MaxDelay MaxDelay-DelayStep:-DelayStep:MinDelay+DelayStep];
    % Assign parameter to the block
    try
        set_param([Delayblock '/Repeating Sequence Stair'],'OutValues',strcat('[',num2str(DelayPattern),']'));
    catch myException
    end   
end


%*********************************************************************
% Function Name:    updateEbN0
% Description:      Set the SNR value, in dB
%*********************************************************************
function myException = updateEbN0(block)
% No restriction
EbN0 = str2double(get_param(block, 'EbN0dB'));
if isnan(EbN0) || ~isreal(EbN0)
    error(message('comm:commQPSK:RealEbN0'));
end
AWGNblock = [bdroot ...
        '/AWGN Channel with Frequency Offset & Variable Time Delay/AWGN Channel'];
myException = updateTgtParamFromEdit(block, AWGNblock, 'EbNodB', 'EbN0dB');


%*********************************************************************
% Function Name:    updateFreqOffset
% Description:      Set the frequency offset, in Hz
%*********************************************************************
function myException = updateFreqOffset(block)
% No restriction
FreqOffset = str2double(get_param(block, 'FreqOffset'));
if isnan(FreqOffset) || ~isreal(FreqOffset)
    error(message('comm:commQPSK:RealFreqOffset'));
end
FreqOffsetblock = [bdroot ...
        '/AWGN Channel with Frequency Offset & Variable Time Delay/Phase// Frequency Offset'];
myException = updateTgtParamFromEdit(block, FreqOffsetblock, 'freqOffset', 'FreqOffset');

ResetSignalBlock  = [bdroot '/Receiver' ...
        '/Coarse Frequency Compensation/Reset Signal'];
val = str2double(get_param(ResetSignalBlock, 'Value'));
set_param(ResetSignalBlock, 'Value', num2str(~val));

%*********************************************************************
% Function Name:    updateFreqResolution
% Description:      Set the FFT Size for Coarse Frequency Compensation
%*********************************************************************
function myException = updateFreqResolution(block)
% Parameter check
FreqResolution = str2double(get_param(block, 'FreqResolution'));
if isnan(FreqResolution) || ~isreal(FreqResolution) || ~isscalar(FreqResolution) || FreqResolution <= 0
    error(message('comm:commQPSK:PositiveFreqResolution')); 
end

% Assign parameter to the block
CoarseFreqCompblock = [bdroot '/Receiver' ...
        '/Coarse Frequency Compensation/Coarse Frequency Compensation'];
myException = updateTgtParamFromEdit(block, CoarseFreqCompblock, 'FrequencyResolution', 'FreqResolution');

%*********************************************************************
% Function Name:    updateMaxOffset
% Description:      Set the Maximum Frequency Offset for Coarse Frequency Compensation
%*********************************************************************
function myException = updateMaxOffset(block)
% Parameter check
maxOffset = str2double(get_param(block, 'MaxOffset'));
validateattributes(maxOffset ,{'numeric'},{'scalar', 'nonnan', 'real', 'nonnegative'},'','Maximum frequency offset')

% Assign parameter to the block
CoarseFreqCompblock = [bdroot '/Receiver' ...
        '/Coarse Frequency Compensation/Coarse Frequency Compensation'];
myException = updateTgtParamFromEdit(block, CoarseFreqCompblock, 'MaximumFrequencyOffset', 'MaxOffset');

%*********************************************************************
% Function Name:    updateCFCAlgorithm
% Description:      Set the Algorithm (FFT/Correlation-based) for Coarse Frequency Compensation
%*********************************************************************
function myException = updateCFCAlgorithm(block)
CoarseFreqCompblock = [bdroot '/Receiver' ...
        '/Coarse Frequency Compensation/Coarse Frequency Compensation'];
myException = updateTgtParamFromPopup(block, ...
    CoarseFreqCompblock, ...
    'Algorithm', {'Correlation-based', 'FFT-based'}, 'CFCAlgorithm');

%*********************************************************************
% Function Name:    updateFineFreqNormalizedBW
% Description:      Set the normalized bandwidth in the Fine Frequency 
%                   Compensation PLL, normalized to f_{symbol}
%*********************************************************************
function myException = updateFineFreqNormalizedBW(block)
% Parameter check 
FineFreqNormalizedBW = str2double(get_param(block, 'FineFreqNormalizedLoopBW'));
if isnan(FineFreqNormalizedBW) || ~isreal(FineFreqNormalizedBW) || FineFreqNormalizedBW <= 0 || FineFreqNormalizedBW >=1 
    error(message('comm:commQPSK:PositiveFineFreqNormalizedBW'));
end
% Assign parameter to the block
FineFreqCompblock = [bdroot '/Receiver/Fine Frequency Compensation'];
myException = updateTgtParamFromEdit(block, FineFreqCompblock, 'NormalizedLoopBandwidth', 'FineFreqNormalizedLoopBW');

%*********************************************************************
% Function Name:    updateFineFreqDampingFactor
% Description:      Set the damping factor in the Fine Frequency Compensation PLL
%*********************************************************************
function myException = updateFineFreqDampingFactor(block)
% Parameter check 
FineFreqDampFactor = str2double(get_param(block, 'FineFreqDampingFactor'));
if isnan(FineFreqDampFactor) || ~isreal(FineFreqDampFactor) || FineFreqDampFactor<=0
    error(message('comm:commQPSK:PositiveFineFreqDampFactor'));
end
% Assign parameter to the block
FineFreqCompblock = [bdroot '/Receiver/Fine Frequency Compensation'];
myException = updateTgtParamFromEdit(block, FineFreqCompblock, 'DampingFactor', 'FineFreqDampingFactor');

%*********************************************************************
% Function Name:    updateTimeRecNormalizedBW
% Description:      Set the normalized bandwidth in the Timing Recovery PLL,
%                   normalized to f_{symbol} 
%*********************************************************************
function myException = updateTimeRecNormalizedBW(block)
% Parameter check 
TimeRecNormalizedBW = str2double(get_param(block, 'TimeRecNormalizedLoopBW'));
if isnan(TimeRecNormalizedBW) || ~isreal(TimeRecNormalizedBW) || TimeRecNormalizedBW <= 0 || TimeRecNormalizedBW >= 1
    error(message('comm:commQPSK:PositiveTimeRecNormalizedBW'));
end
% Assign parameter to the block
TimeRecLoopFilterblock = [bdroot '/Receiver/Timing Recovery'];
myException = updateTgtParamFromEdit(block, TimeRecLoopFilterblock, 'NormalizedLoopBandwidth', 'TimeRecNormalizedLoopBW');

%*********************************************************************
% Function Name:    updateTimeRecDampingFactor
% Description:      Set the damping factor in the Timing Recovery PLL
%*********************************************************************
function myException = updateTimeRecDampingFactor(block)
% Parameter check 
TimeRecDampFactor = str2double(get_param(block, 'TimeRecDampingFactor'));
if isnan(TimeRecDampFactor) || ~isreal(TimeRecDampFactor) || TimeRecDampFactor<=0
    error(message('comm:commQPSK:PositiveTimeRecDampFactor'));
end
% Assign parameter to the block
TimeRecLoopFilterblock = [bdroot '/Receiver/Timing Recovery'];
myException = updateTgtParamFromEdit(block, TimeRecLoopFilterblock, 'DampingFactor', 'TimeRecDampingFactor');

% [EOF]
