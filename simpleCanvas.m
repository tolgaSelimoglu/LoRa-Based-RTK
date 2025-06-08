XTrain = num2cell(data(:,1));
YTrain = data(:,2);

% 4. LSTM ağı tanımla
inputSize = 1;
hiddenLayer1 = 100;
hiddenLayer2 = 50;
ffnnLayer1 = 50;
ffnnLayer2 = 25;
learningrate = 0.005;
epoch = 150;
dropout = 0.2;
outputSize = 1;

layers = [ ...
    sequenceInputLayer(inputSize)
    lstmLayer(hiddenLayer1, 'OutputMode', 'sequence')  % 1. LSTM
    lstmLayer(hiddenLayer2, 'OutputMode', 'last')      % 2. LSTM
    fullyConnectedLayer(ffnnLayer1)
    dropoutLayer(dropout)
    fullyConnectedLayer(ffnnLayer2)
    fullyConnectedLayer(outputSize)
    regressionLayer];

% 5. Eğitim seçeneklerini ayarla
options = trainingOptions('adam', ...
    'MaxEpochs', epoch, ...
    'GradientThreshold', 1, ...
    'InitialLearnRate', learningrate, ...
    'Verbose', 0, ...
    'Plots', 'training-progress');


% 6. Ağı eğit
net = trainNetwork(XTrain, YTrain, layers, options);

% **5. Test Verisi Üzerinde Tahmin Yap**
XTest = XTrain;  % Test verisi
YPred = predict(net, XTest, 'MiniBatchSize', 1);

%% 6. Sonuçları Çiz
figure;
plot(YPred, data(:,1), '-*', 'Color', 'red');     % Kırmızı ton 
hold on;
plot(data(:,2),data(:,1),'-','Color','magenta')
hold off;

title('Hybrid Model Predict');
legend show;
xlabel('Distance (cm)');
ylabel('RSSI (dBm)');
grid on;