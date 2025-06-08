lastValue = dataTest(end);  % Son gerçek değer
numForecasts = 500;
predicted = zeros(1, numForecasts);

for i = 1:numForecasts
    X = {lastValue};  % input cell olarak verilmeli
    Y = predict(net, X, 'MiniBatchSize', 1);
    predicted(i) = Y;
    lastValue = Y;  % Tahmin edilen değeri bir sonraki adım için giriş olarak kullan
end

% Çiz
figure
plot(1:numForecasts, predicted, '-*')
title('20 Adım İleriye Tahmin')
xlabel('Zaman Adımı')
ylabel('Tahmin Değeri')
grid on

