# Servo Module
The Servo Module is designed to easily power a microcontroller and up to 6 servos with 2x LIPO batteries. It uses simple components and a PCB laid out for easy soldering.
PCBs can be printed through [Elcrow](https://www.elecrow.com/pcb-manufacturing.html) for less than $2ea with delivery. Components can be cheaply sourced from Little Bird, Core, Element14, or Aliexpress.

Download the GERBER file [here](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/TempeHS_Sensor_Catalogue/ServoModule/ServerModule_GERBER.zip).

![Front of Module](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/TempeHS_Sensor_Catalogue/ServoModule/front.svg)
![Back of Module](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/TempeHS_Sensor_Catalogue/ServoModule/back.svg)

## Powering different microcontrollers:
1. **Arduino Uno** jump VREG and power to 5.1 jack or to VIN & GND pin
2. **Arduino Nano** LM7805 VREG and power to VIN & GND pin
3. **Microbit** LD1117V33 VREG connected to Microbit power connector
4. **Raspberry PI PICO** LD1117V33 VREG connected to 39 VSYS & GND pin
5. Power any microcontroller independently and connect the module GND to microcontroller GND (D1 will not be required).

## Sensor V/GND Pins
A row of V and GND pins is provided to supply additional modules/sensors, as most microcontrollers only have 1-2 power supply pins. The V row is powered from the VREG circuit, and the NC jumper can be cut with a Stanley knife to isolate the pins so they can be connected to a Microcontroller VOUT by a jumper lead for a different voltage.

## Fuse
The fuse protects microcontrollers, sensors, and motors from an over-amperage situation and is recommended. If a fuse is not required, you can solder the two jumpers on the back of the PCB.

## Capacitors
A 100nF ceramic and 100uF aluminium capacitor on each servo will filter out any noise from the power supply, improving the accuracy of the signal from the microcontroller. Users can choose between both capacitors, just an aluminium capacitor or the module will still work without any capacitors soldered in place.

## Connecting VIN
A 2x LIPO battery holder with switch can be connected to either screw terminals or the wires soldered directly to the PCB.

## Connecting VOUT
Wires out can be connected to screw terminals, soldered directly to the PCB or dupont cables from the V/GND row of Pins.

## Components
### Required
1. Male header pins
2. 3x 1N5819 Diodes (D1, D2, & D3)

### Optional
1. LM7805 or LD1117V33 (VREG)
2. 100uF Aluminum Electronic Capacitors (C1, C2, C3, C4, C5, & C6)
3. 100nF ceramic capacitor (C7, C8, C9, C10, C11, & C12)
4. Screw terminals (VIN & VOUT)
5. 20x5 PCB FUSE Holder & 20x5 1A FUSE (FUSE)