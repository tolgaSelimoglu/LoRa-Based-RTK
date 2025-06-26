function xNext = myStateTransitionFcn(x, u)
    dt = 0.1; % Zaman adımı
    A = [1 dt; 0 1]; % Durum geçiş matrisi
    B = [0; dt]; % Kontrol matrisi

    xNext = A * x + B * u; % Yeni durumu hesapla
end
