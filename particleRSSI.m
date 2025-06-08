% RSSI Sinyalini Simüle Edelim (Örnek Veri)
t = linspace(0,10,500); % Zaman vektörü
trueSignal = -40 + 5*sin(2*pi*0.2*t); % Gerçek RSSI dalgalanması
rssiData = trueSignal + randn(size(t))*2; % Gürültü eklenmiş RSSI verisi

% Particle Filter Tanımı
numParticles = 1000;                 % Parçacık sayısı
initialStateMean = rssiData(1);       % Başlangıç tahmini
initialStateCovariance = 4;           % Başlangıç belirsizliği (sigma^2)

pf = particleFilter(@stateTransitionFcn, @measurementLikelihoodFcn);

% Başlat
initialize(pf, numParticles, initialStateMean, initialStateCovariance);

% Filtrelenmiş çıkışları saklamak için
filteredSignal = zeros(size(rssiData));

% Particle Filter uygulaması
for k = 1:length(rssiData)
    predict(pf);                        % Sistemi bir adım ilerlet
    correct(pf, rssiData(k));            % Ölçümle düzelt
    filteredSignal(k) = getStateEstimate(pf); % Tahmini al
end

% Sonuçları çiz
figure;
plot(t, rssiData, 'r.', 'DisplayName', 'Gürültülü RSSI');
hold on;
plot(t, filteredSignal, 'b-', 'LineWidth',1.5, 'DisplayName', 'Filtrelenmiş RSSI');
plot(t, trueSignal, 'k--', 'LineWidth',1.5, 'DisplayName', 'Gerçek RSSI');
legend;
xlabel('Zaman (s)');
ylabel('RSSI (dBm)');
title('Particle Filter ile RSSI Sinyal Filtreleme');
grid on;

% Fonksiyonlar
function newState = stateTransitionFcn(state)
    % RSSI gibi yavaş değişen bir sinyal için küçük rastgele değişim
    newState = state + randn(size(state))*0.5; % Transition noise
end

function likelihood = measurementLikelihoodFcn(pf, measurement, particles)
    sigma = 2; % Ölçüm gürültü seviyesi
    likelihood = normpdf(measurement - particles, 0, sigma);
end
