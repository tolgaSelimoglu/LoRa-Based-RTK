% Set the reference RSSI (RSSI_0) at 1 meter and path loss exponent
RSSI_0 = -28.35;  % RSSI at 1 meter (in dBm)
n = 1.35;         % Path loss exponent

% Define the RSSI range from 0 to -50
RSSI_values = 0:-1:-50;

% Initialize an array for distance values
distances = zeros(size(RSSI_values));

% Calculate distances for each RSSI value
for i = 1:length(RSSI_values)
    distances(i) = 10^((RSSI_0 - RSSI_values(i)) / (10 * n));
end

% Plot the results
figure;
plot(distances.*100, RSSI_values, 'bo-', 'LineWidth', 2, 'MarkerSize', 6);
grid on;
xlabel('Distance (cm)');
ylabel('RSSI (dBm)');
title('RSSI vs Distance');
%set(gca, 'YDir', 'reverse'); % Reverse y-axis for better visualization
