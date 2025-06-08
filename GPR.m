% Örnek eğitim verileri
X = ts.time;   % Girdi verileri
Y = ts.data; % Çıktı verileri

% GPR Modelini Eğitme
gprMdl = fitrgp(X, Y);

% Modeli bir dosyaya kaydetme
save('gprModel.mat', 'gprMdl');
