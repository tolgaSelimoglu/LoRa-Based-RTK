%clc, clear all, close all

num = 0;
num2 = 0;
num3 = 0;

NodeAList = []; % Sayıları saklamak için boş bir liste
NodeA = 'Node A: (-?\d+)'; % "Node A: sayı" formatındaki veriyi yakalamak için desen

NodeBList = []; % Sayıları saklamak için boş bir liste
NodeB = 'Node B: (-?\d+)';

NodeCList = [];
NodeC = 'Node C: (-?\d+)';

%%
fid = fopen('Environment2\LoRaWAN\5D3.txt', 'r'); % TXT dosyasını aç
while ~feof(fid)
    line = fgetl(fid); % Satır satır oku
    tokens = regexp(line, NodeA, 'tokens'); % Desene uygun veriyi al
    if ~isempty(tokens)
        NodeAList(end+1) = str2double(tokens{1}{1}); % Sayıyı listeye ekle
        num = num + 1
    end
end
fclose(fid); % Dosyayı kapat
fid = fopen('Environment2\LoRaWAN\5D3.txt', 'r'); % TXT dosyasını aç
while ~feof(fid)
    line = fgetl(fid); % Satır satır oku
    tokens = regexp(line, NodeB, 'tokens'); % Desene uygun veriyi al
    if ~isempty(tokens)
        NodeBList(end+1) = str2double(tokens{1}{1}); % Sayıyı listeye ekle
        num2 = num2 + 1
    end
end
fclose(fid); % Dosyayı kapat
fid = fopen('Environment2\LoRaWAN\5D3.txt', 'r'); % TXT dosyasını aç
while ~feof(fid)
    line = fgetl(fid); % Satır satır oku
    tokens = regexp(line, NodeC, 'tokens'); % Desene uygun veriyi al
    if ~isempty(tokens)
        NodeCList(end+1) = str2double(tokens{1}{1}); % Sayıyı listeye ekle
        num3 = num3 + 1
    end
end
fclose(fid); % Dosyayı kapat

%%
t = linspace(1,num,num)
t2 = linspace(1,num2,num2)
t3 = linspace(1,num3,num3)


%plot(t,NodeAList)

%f = curveFitter(t,NodeAList);

%plot(f,t,NodeAList);
%f(600)

%% Fit: 'untitled fit 1'.
[xData, yData] = prepareCurveData( t, NodeAList );
[xxData, yyData] = prepareCurveData( t2, NodeBList );
[xxxData, yyyData] = prepareCurveData( t3, NodeCList );

% Set up fittype and options.
ft = fittype( 'poly1' );

% Fit model to data.
[fitresult, gof] = fit( xData, yData, ft);
[ffitresult, ggof] = fit( xxData, yyData, ft);
[fffitresult, gggof] = fit( xxxData, yyyData, ft);

% Plot fit with data.
% figure( 'Name', 'untitled fit 1' );
% h = plot( fitresult, xData, yData );
% legend( h, 'NodeAList vs. t', 'untitled fit 1', 'Location', 'NorthEast', 'Interpreter', 'none' );
% % Label axes
% xlabel( 't', 'Interpreter', 'none' );
% ylabel( 'NodeAList', 'Interpreter', 'none' );
% grid on


% Ayrık zamanlı verileri belirli bir aralıkta hesapla
% Eğer belirli bir aralık istiyorsan, linspace ile değiştirebilirsin

fitted_env2_5D3_A = fitresult(t); % Fit edilen fonksiyondan değerleri al
fitted_env2_5D3_B = ffitresult(t2); 
fitted_env2_5D3_C = fffitresult(t3); 

%fitted_env1_5D3_A(:,2) = sqrt((2*500/3)^2+(500/3)^2);
%fitted_env1_5D3_B(:,2) = 500/3*sqrt(2);
%fitted_env1_5D3_C(:,2) = sqrt((2*500/3)^2+(500/3)^2);

% t = linspace(111.9, 111.7, num);
% plot(t,fitted_env1_1D1_C)
% Sonuçları bir TXT dosyasına kaydet

%save('discreteData.mat', 'fitted_env1_5D3_A', '-append');
%save('discreteData.mat', 'fitted_env1_5D3_B', '-append');
%save('discreteData.mat', 'fitted_env1_5D3_C', '-append');