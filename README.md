# Strain Gauges

## Overview
This project aims to use strain gauge sensors to measure the mechanical strain of shank modules for AFO research. 

## Background
The sensors can be applied to the surface of an object and strain can be measured parallel to the sensor. Refer to the image below for how this works with load cells:

![image](https://github.com/user-attachments/assets/d6ee08b3-0465-4b90-bc14-3e3d175d5e35)

The raw readings from the strain gauges are in milliVolts

## Methodology
Using the hardware labeled below, a circuit can be devised, as shown below.




### Hardware
- Microcontroller: Wemos D1 R2. “LOLIN(WEMOS) D1 R2 & mini” for Arduino IDE Board Selection

- Amplifier + A/D Converter: HX711. Purchased from: https://www.amazon.com/Amplifier-Breakout-Converter-Raspberry-Microcontroller/dp/B07MTYT95R 

  - Datasheet: https://www.digikey.com/htmldatasheets/production/1836471/0/0/1/hx711.html


- Culler Strain Gauges: https://www.amazon.com/Culler-Mechanics-Experiment-Material-Industry/dp/B01FUNXO1I?source=ps-sl-shoppingads-lpcontext&ref_=fplfs&psc=1&smid=A2VS24EX34F6MS

- 4x 120Ω (nominal) resistors


