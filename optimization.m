XTrain = num2cell(data(:,1));
YTrain = data(:,2);

% Hiperparametre kombinasyonlarını tanımla
hiddenLayer1Set = [50, 60, 75, 100];
hiddenLayer2Set = [25, 30, 40, 50];
ffnnLayer1Set = [50, 60, 75, 100];
ffnnLayer2Set = [25, 30, 40, 50];
learnRateSet = [0.001, 0.005, 0.01];
epochSet = [50, 75, 100, 150];
dropoutSet = [0.1, 0.2, 0.3];

bestLoss = inf;
bestNet = [];
bestParams = [];

numTrials = 100;
for i = 1:numTrials
    h1 = randsample(hiddenLayer1Set, 1);
    h2 = randsample(hiddenLayer2Set, 1);
    f1 = randsample(ffnnLayer1Set, 1);
    f2 = randsample(ffnnLayer2Set, 1);
    lr = randsample(learnRateSet, 1);
    ep = randsample(epochSet, 1);
    dp = randsample(dropoutSet, 1);
    % eğitim kodu burada devam eder...

    layers = [
        sequenceInputLayer(1)
        lstmLayer(h1, 'OutputMode', 'sequence')
        lstmLayer(h2, 'OutputMode', 'last')
        fullyConnectedLayer(f1)
        dropoutLayer(dp)
        fullyConnectedLayer(f2)
        fullyConnectedLayer(1)
        regressionLayer
    ];

    options = trainingOptions('adam', ...
        'MaxEpochs', ep, ...
        'GradientThreshold', 1, ...
        'InitialLearnRate', lr, ...
        'Verbose', false, ...
        'Plots', 'none');
            
    net = trainNetwork(XTrain, YTrain, layers, options);

    YPred = predict(net, XTrain, 'MiniBatchSize', 1);
    loss = mse(YPred - YTrain);

    if loss < bestLoss
        bestLoss = loss;
        bestNet = net;
        bestParams = [h1, h2, f1, f2, lr, ep, dp];
    end

end

disp("Best Loss: " + bestLoss);
disp("Best Params: LSTM1=" + bestParams(1) + ...
    ", LSTM2=" + bestParams(2) + ...
    ", FC1=" + bestParams(3) + ...
    ", FC2=" + bestParams(4) + ...
    ", LR=" + bestParams(5) + ...
    ", Epochs=" + bestParams(6) + ...
    ", Dropout=" + bestParams(7));

%% ESKİ YÖNTEM
for h1 = hiddenLayer1Set
    for h2 = hiddenLayer2Set
        for f1 = ffnnLayer1Set
            for f2 = ffnnLayer2Set
                for lr = learnRateSet
                    for ep = epochSet
                        for dp = dropoutSet
                        end
                    end
                end
            end
        end
    end
end