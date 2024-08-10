# Servo Module
The Servo Module is designed for easy powering of a microcontroller and up to 6 servos using simple components and PCB laid out for easy soldering. PCB prints can be printed through [Elcrow](https://www.elecrow.com/pcb-manufacturing.html) for less than $2ea with delivery. Components are cheaply sourced from Little Bird, Core, Element14 or Aliexpress.

![Front of Module](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/TempeHS_Sensor_Catalogue/ServoModule/front.svg)
![Back of Module](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/TempeHS_Sensor_Catalogue/ServoModule/back.svg)

## Powering different microcontrollers:
1. **Arduino Uno** jump VREG and power to 5.1 jack or LM7805 VREG power to VIN & GND pin
2. **Arduino Nano** LM7805 VREG and power to VIN & GND pin
3. **Microbit** LD1117V33 VREG connected to Microbit power connector
4. **Raspberry PI PICO** LD1117V33 VREG connected to 39 VSYS & GND pin
5. Power an microcroller independantly and connect module GRD to micorcontroller GND

## Sensor Power Pin
A row of V and GND pins are provided to supply addtional modules. The V row is powered from the VREG circuit. The jumper can be cut with a stanley knife to isolate the pins and connected to the Microcontroller Voltage by a jumper lead for a differnet voltage.

## Components
1. Optional VREG (see above)
2. 3x 1N5819
3. 1-6x 100nF ceramic capacitor
4. 1-6x 100uF Aluminum Electronic Capacitors
5. Header pins
6. 2x Screw terminals (you can solder wires direct to PCB or connect VOUT from the v/GNB row of PINS)
7. Fuse Holder & fuse (optional, can be jumped on back of board)

