clc; clear; close all;

% Örnek veri seti (gürültülü ölçümler)
t = linspace(0, 10, 100); % Zaman vektörü
true_signal = sin(t); % Gerçek sinyal
noisy_measurements = true_signal + 0.2 * randn(size(t)); % Gürültülü sinyal

% EKF parametreleri
x_est = 0; % İlk tahmin
P = 1; % Kovaryans matrisi
Q = 0.01; % Süreç gürültüsü kovaryansı
R = 0.04; % Ölçüm gürültüsü kovaryansı

% Sonuçları saklamak için vektörler
x_est_hist = zeros(size(t));

for k = 1:length(t)
    % Tahmin adımı
    x_pred = x_est; % Doğrusal olmayan sistem varsayımı
    P_pred = P + Q;
    
    % Ölçüm güncelleme adımı
    K = P_pred / (P_pred + R); % Kalman kazancı
    x_est = x_pred + K * (noisy_measurements(k) - x_pred);
    P = (1 - K) * P_pred;
    
    % Sonuçları sakla
    x_est_hist(k) = x_est;
end

% Sonuçları çizdirme
figure;
plot(t, true_signal, 'g', 'LineWidth', 2); hold on;
plot(t, noisy_measurements, 'r.');
plot(t, x_est_hist, 'b', 'LineWidth', 2);
legend('Gerçek Sinyal', 'Gürültülü Ölçümler', 'EKF Tahmini');
xlabel('Zaman'); ylabel('Sinyal Değeri');
title('Extended Kalman Filtre ile Gürültü Azaltma');
grid on;
