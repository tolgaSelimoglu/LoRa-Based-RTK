function x_est = particle_filter(z_meas, N, Q, R)
    persistent particles weights init;
    if isempty(init)
        particles = randn(N, 1) * 5;  
        weights = ones(N, 1) / N;
        init = true;
    end

    % 1. Parçacıkları Güncelle (Durum Geçişi)
    particles = particles + sqrt(Q) * randn(N, 1);

    % 2. Ölçüm Güncellemesi
    weights = exp(-0.5 * ((z_meas - particles).^2) / R);
    weights = weights / sum(weights);

    % 3. Tahmini Hesapla
    x_est = sum(weights .* particles);

    % 4. Resampling (Yeniden Örnekleme)
    Neff = 1 / sum(weights.^2);
    if Neff < N / 2
        indices = randsample(N, N, true, weights);
        particles = particles(indices);
        weights = ones(N, 1) / N;
    end
end
