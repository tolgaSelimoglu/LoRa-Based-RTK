%clc; clear; close all;

% **1. Veri Seti Oluşturma**
X = fitted_env1; % Giriş verileri
Y = t;

X = X(:)'; % Satır vektörüne çevir
Y = Y(:)'; % Satır vektörüne çevir

% **2. FFNN Modelini Oluşturma**
net = feedforwardnet([10,8]); % 10 ve 5 nöronlu 2 katmanlı ağ
net.trainParam.epochs = 10000; % Epoch sayısını artırarak eğitimi iyileştirebiliriz
net.trainParam.goal = 1e-10;   % Hata hedefi

%%
% net = fitnet(10,'trainlm');
% net.divideParam.trainRatio = 0.8;
% net.divideParam.valRatio = 0.1;
% net.divideParam.testRatio = 0.1;

% **3. Modeli Eğitme**
net = train(net, X, Y);

% **4. Modelden Tahmin Alma**
X_test = transpose(fitted_env1_1D3_A(:,1));%linspace(-29, -23, 50); % 50 yeni giriş oluştur
Y_pred = net(X_test); % Modelden tahmin al

% **5. Sonuçları Görselleştirme**
figure;
plot(Y, X, 'bo', 'MarkerSize', 8, 'LineWidth', 1.5); hold on;
plot(Y_pred, X_test, 'r-', 'LineWidth', 2);
ylabel('Giriş (X)');
xlabel('Çıkış (Y)');
legend('Model Yaklaşımı', 'Tahminler');
title('FFNN Modeli Eğitimi ve Tahmini');
grid on;
