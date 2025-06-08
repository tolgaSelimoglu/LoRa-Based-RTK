% Main script
% Set the reference RSSI (RSSI_0) at 1 meter, measured RSSI, and path loss exponent
RSSI_0 = -27;  % RSSI at 1 meter (in dBm)
RSSI = -36;    % Measured RSSI (in dBm)
%n = 1.45;         % Path loss exponent for free space (adjust as needed)
%n = 1.35; %env1
n = 1.45

%[en iyi sonuç logaritmik curve fitter]
% Calculate the distance
distance = 10^((RSSI_0 - RSSI) / (10 * n));

% Display the result
fprintf('The estimated distance is %.2f meters.\n', distance);

