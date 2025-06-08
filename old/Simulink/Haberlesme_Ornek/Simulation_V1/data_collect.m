antenna_gain_tx_4 = antenna_gain_tx;
antenna_gain_rx_4 = antenna_gain_rx;
receive_power_4 = receive_power;
trans_power_4 = trans_power;
distance_4 = distance.Data;
%%
gains_rx = [antenna_gain_rx_1;antenna_gain_rx_2;antenna_gain_rx_3;antenna_gain_rx_4];
gains_tx = [antenna_gain_tx_1;antenna_gain_tx_2;antenna_gain_tx_3;antenna_gain_tx_4];
receive_pwr = [receive_power_1;receive_power_2;receive_power_3;receive_power_4];
trans_pwr = [trans_power_1;trans_power_2;trans_power_3;trans_power_4];
distances = [distance_1; distance_2; distance_3; distance_4];
%%
input_nn = [ gains_tx, gains_rx, receive_pwr, trans_pwr ];
output_nn = [distances];