%filter = dsp.FIRFilter(Numerator=ones(1,40)/40);
%mvgAvg = dsp.MovingAverage(40);
%FIReq = fdesign.lowpass('N,Fc,Ap,Ast',40,0.1,0.5,40);
%filterCoeff = design(FIReq,'equiripple',SystemObject=true);

% windowSize = 5; 
% b = (1/windowSize)*ones(1,windowSize);
% a = 1;
x = x_est;
% y = filter(b,a,x);
% 
% plot(t,x)
% hold on
% plot(t,y)
% legend('Input Data','Filtered Data')


fs = 1e3;
RSSI = lowpass(x,57,fs);

RSSI_0 = -27;  
n = 1.45;

distance = 10.^((RSSI_0 - RSSI) / (10 * n));  % Logaritmik işlem için nokta (.) operatörü kullanıldı.

plot(distance) % Eğer x ekseni için indeks numarası kullanmak istiyorsan:
xlabel('Örnek Numarası')
ylabel('Mesafe (metre)')
title('RSSI')
grid on;
