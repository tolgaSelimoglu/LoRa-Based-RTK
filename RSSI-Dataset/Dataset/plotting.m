X_test = transpose(fitted_env2_5D3_A(:,1));%linspace(-29, -23, 50); % 50 yeni giriş oluştur
Y_pred = net(X_test); % Modelden tahmin al

figure;
plot(Y, X, 'bo', 'MarkerSize', 8, 'LineWidth', 1.5); hold on;
plot(Y_pred, X_test, 'r-', 'LineWidth', 2);
ylabel('Giriş (X)');
xlabel('Çıkış (Y)');
legend('Model Yaklaşımı', 'Tahminler');
title('FFNN Modeli Eğitimi ve Tahmini');
grid on;
