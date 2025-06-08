% 1. Veri oluştur
data = sin(0:0.05:50);  % Yaklaşık 1000 noktalı sinüs dalgası

% 2. Eğitim ve test verisi ayır
numTimeStepsTrain = floor(0.8 * numel(data));
dataTrain = data(1:numTimeStepsTrain+1);
dataTest = data(numTimeStepsTrain+1:end);

% 3. Giriş-çıkış çiftlerini hazırla (1 adım ileri tahmin)
XTrain = num2cell(dataTrain(1:end-1));  % cell array (giriş)
YTrain = dataTrain(2:end)';             % normal sütun vektör (çıkış)

XTest = num2cell(dataTest(1:end-1));
YTest = dataTest(2:end)';

% 4. LSTM ağı tanımla
inputSize = 1;
numHiddenUnits = 100;
ffnnLayer1 = 100;
ffnnLayer2 = 50;
outputSize = 1;

layers = [ ...
    sequenceInputLayer(inputSize)
    lstmLayer(numHiddenUnits,'OutputMode','last')
    fullyConnectedLayer(ffnnLayer1)
    dropoutLayer(0.2)
    fullyConnectedLayer(ffnnLayer2)
    fullyConnectedLayer(outputSize)
    regressionLayer];

% 5. Eğitim seçeneklerini ayarla
options = trainingOptions('adam', ...
    'MaxEpochs', 100, ...
    'GradientThreshold', 1, ...
    'InitialLearnRate', 0.005, ...
    'Verbose', 0, ...
    'Plots', 'training-progress');

% 6. Ağı eğit
net = trainNetwork(XTrain, YTrain, layers, options);

% 7. Test verisi üzerinde tahmin yap
YPred = predict(net, XTest, 'MiniBatchSize', 1);

% 8. Sonuçları çiz
YTrue = YTest;
X = 1:numel(YTrue);

figure
plot(X, YTrue, '-o')
hold on
plot(X, YPred, '-*')
legend('Gerçek', 'Tahmin')
title('LSTM Tahmin Sonuçları')
xlabel('Zaman Adımı')
ylabel('Değer')
grid on

