%clc; clear; close all;

%% **1. Parametreleri Tanımla**
N = 1000; % Parçacık sayısı
Q = 15;  % Süreç Gürültüsü Kovaryansı
R = 2;    % Ölçüm Gürültüsü Kovaryansı

RSSI_0 = -27;  % RSSI at 1 meter (in dBm)
%n = 1.45;         % Path loss exponent for free space (adjust as needed)
%n = 1.35; %env1
n = 1.45;

% **Seri Port Ayarları (Arduino, ESP32, STM32, vb. için)**
%serial_port = serialport("COM5", 9600);  % Port ve baudrate (kendine göre değiştir)
%flush(serial_port);  % Önceki verileri temizle

% **Verileri saklamak için diziler**
T = 200;               % Zaman adımı sayısı
z_meas = zeros(1, T);  % Gürültülü sensör ölçümleri
x_est = zeros(1, T);   % Particle Filter tahmini
distance = zeros(1, T);

% **Parçacıklar ve Ağırlıklar**
particles = randn(N, 1) * 5;  % Başlangıçta geniş dağılım
weights = ones(N, 1) / N;

%% **2. Gerçek Zamanlı Sensör Okuma ve Particle Filter Uygulama**
figure;
hold on;
grid on;
xlabel('Zaman Adımı');
ylabel('Sensör Değeri');
title('Gerçek Zamanlı Particle Filter Uygulaması');

for k = 1:T
    % **Seri Porttan Veriyi Oku**
    input = ts.data(k);%readline(serial_port);  % Sensörden gelen veri
    z_meas(k) = double(input);  % String -> Double çevir
    
    if isnan(z_meas(k))
        continue;  % Geçersiz veri gelirse atla
    end
    
    % **(1) Parçacıkları Güncelle (Öngörü Adımı)**
    particles = particles + sqrt(Q) * randn(N, 1);
    
    % **(2) Ağırlıkları Hesapla (Ölçüm Güncellemesi)**
    weights = exp(-0.5 * ((z_meas(k) - particles).^2) / R);
    weights = weights / sum(weights);  % Normalize et
    
    % **(3) Tahmini hesapla**
    x_est(k) = sum(weights .* particles);

    % **(4) Resampling (Yeniden Örnekleme)**
    Neff = 1 / sum(weights.^2);  % Efektif parçacık sayısı
    if Neff < N / 2
        indices = randsample(N, N, true, weights);
        particles = particles(indices);
        weights = ones(N, 1) / N;
    end

    RSSI = x_est(k);
    %[en iyi sonuç logaritmik curve fitter]
    % Calculate the distance
    distance(k) = 10^((RSSI_0 - RSSI) / (10 * n));
    
    % **5. Gerçek Zamanlı Grafik Güncelle**
    plot(1:k, z_meas(1:k), 'rx', 'MarkerSize', 5);  % Gürültülü ölçümler
    plot(1:k, x_est(1:k), 'b-', 'LineWidth', 2);    % Filtrelenmiş tahmin
    %plot(1:k, distance(k), 'rx', 'LineWidth', 3);
    %legend('Gürültülü Sensör Ölçümü', 'Particle Filter Tahmini');
    pause(0.1);  % Grafiği güncellemek için kısa bekleme
end

% **Seri portu kapat**
clear serial_port;
