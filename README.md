# Strain Gauges

## Overview
This project aims to use strain gauge sensors to measure the mechanical strain. It can be applied to the surface of dog bone test samples, or shank modules for AFO research, where the strain is measured parallel to the sensor. By using a Wheatstone bridge circuit with sensors and/or resistors, an HX711 Load cell amplifier, and a Wemos D1 R2, readings from the sensors can be converted to strain measurements. 

## Hardware
- Microcontroller: Wemos D1 R2
  - “LOLIN(WEMOS) D1 R2 & mini” for Arduino IDE Board Selection

- Amplifier + A/D Converter: HX711
  - Purchase Link: https://www.amazon.com/Amplifier-Breakout-Converter-Raspberry-Microcontroller/dp/B07MTYT95R 
  - Datasheet: https://www.digikey.com/htmldatasheets/production/1836471/0/0/1/hx711.html

- Culler Strain Gauges
  - Purchase Link: https://www.amazon.com/Culler-Mechanics-Experiment-Material-Industry/dp/B01FUNXO1I?source=ps-sl-shoppingads-lpcontext&ref_=fplfs&psc=1&smid=A2VS24EX34F6MS
  - Datasheet: https://www.omega.co.uk/techref/pdf/strain_gage_technical_data.pdf
  - Gage factor 2.0-2.1 with ± 5%-10%

- 4x 120Ω (nominal) resistors

## Important Calculations
1. HX711 Specs
  - 24-bit ADC with 1 sign bit, so consider 2^23 = 8,338,608
  - Gain = 128
  - Voltage range: ±20mV
2. Voltage Cals
  - HX711 raw reading / 2^23 = Voltage in mV
  - Multiply by 20 for averaging

### Theoretical Quarter Bridge:
- **Vin:** 9.98V
- **Vout:** -0.4536V
- **Resistor Values:**
  - R1: 120Ω
  - R2: 100Ω
  - R3: 120Ω
  - R4: 120Ω
 
### Two Gauges (Active + Dummy) - True Resistance Values:
- **Vin:** 10V
- **Vout:** 0.0166V
- **Resistor Values:**
  - R1: 120.2Ω
  - R2: 120.6Ω
  - R3: 120.5Ω
  - R4: 120.1Ω

For further theoretical insights, refer to [this NASA tutorial](https://www.grc.nasa.gov/www/k-12/airplane/tunwheat.html).



