# LoRa-Based-RTK
Bitirme Projesi
## Project Structure

LoRa-Based-RTK/
├── README.md
├── Distances.png
├── FFNN_For_PathLoss_Distance.png
├── Spectrum-Symbol.png 
├── Simulink/
│   ├── Blackbox_Diagram/
│   │       ├── Blackbox trials using Simulink. (See Documentation Branch)
│   ├── Haberlesme_Ornek/
│   │       ├── example/ 
│   │       │   ├── Example for wireless communication systems by MathWorks
│   │       ├── Simulation_V1/ 
│   │       │   ├──commqpsktxrx.slx ( Simulation file)
│   │       │   ├── Others (Necessary files for simulation)


## PNG Files

![Comprasion Of Distances](img\Distances.png)

- `Distances.png`: Comparison of the actual distance with the calculated distance and the estimated distance with FFNN(FeedForward Neural Network)

![Result of FFNN](img\FFNN_For_PathLoss_Distance.png)

- `FFNN_For_PathLoss_Distance.png`: Feedforward Neural Network model for path loss and distance estimation.

![Spectrum and Symbol Analyser](img\Spectrum-Symbol.png)

- `Spectrum-Symbol.png`: Spectrum and symbol representation used in the communication system at 10km distance.

## Simulink File

(You can open the simulink file directly by double-clicking on the PathLoss_Simulation file)

![Top Model of Simulink](img\Simulink.png)
