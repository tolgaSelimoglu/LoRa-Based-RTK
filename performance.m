XTest = data(:,1);
YTest = data(:,2);
YPred = predict(bestNet, num2cell(XTest));

error = YTest - YPred;
plot(error,'-r');
title('Prediction Error');
xlabel('Sample');
ylabel('Error (Real - Predict)');

figure;
plotregression(YTest, YPred);

YTrue = YTest;               % YTest: gerçek test çıktısı

% RMSE hesapla
rmse = sqrt(mean((YPred - YTrue).^2));

% İsteğe bağlı: örnek bazlı RMSE (her örnek için ayrı ayrı)
rmse_per_sample = sqrt((YPred - YTrue).^2);

% Grafik çizimi
figure;
plot(rmse_per_sample, '-o');
title(['RMSE per Sample (Toplam RMSE = ' num2str(rmse) ')']);
xlabel('Sample Index');
ylabel('RMSE');
grid on;

figure;
plot(YTrue, 'r');
hold on;
plot(YPred, 'b--');
legend('Gerçek Değer', 'Tahmin');
title('Gerçek vs Tahmin');
xlabel('Örnek');
ylabel('Değer');
grid on;
