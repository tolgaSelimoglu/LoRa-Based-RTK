function y = myMeasurementFcn(x)
    RSSI_0 = -28.35;  % RSSI at 1 meter (in dBm)
    RSSI = x;    % Measured RSSI (in dBm)
    %n = 1.45;         % Path loss exponent for free space (adjust as needed)
    n = 1.35;
    
    %[en iyi sonuç logaritmik curve fitter]
    % Calculate the distance
    y = 10^((RSSI_0 - RSSI) / (10 * n));
end
