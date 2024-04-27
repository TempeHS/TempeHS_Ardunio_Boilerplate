# Ardunio Boilerplate

## Index
1. [Core Components](#core-components)
2. [PipeLines](#pipelines)
    1. [Bootcamp PipeLine](#bootcamp-pipeline)
    2. [BoilerPlate PipeLine](#boilerplate-pipeline)
3. [TempeHS Actuators](#tempehs-actuators)
4. [TempeHS Display Modules](tempehs-display-modules)
5. [TempeHS Sensors](#tempehs-sensors)
6. [TempeHS Shields & Modules](#tempehs-shields--modules)
7. [Planning & Modelling Mechatronic Tools](#planning--modelling-mechatronic-tools)
8. [TempeHS Power Supply](#tempehs-power-supply)
9. [TempeHS Electronic Components](#tempehs-electronic-components)
10. [TempeHS Mechatronic & Electronic Tools](#tempehs-mechatronic--electronic-tools)
    1. [Handtools](#handtools)
    2. [Bench tools](#bench-tools)

## Before you begin
  1. Install [Arduino IDE for Windows](https://drive.google.com/file/d/1ha-3JTMwprRaKoNczq-eIYs7LrxqR_wl/view?usp=drive_link) or [Arduino IDE for MAC](https://drive.google.com/file/d/1hbWTW9vQ1C1OLoO4T3Ryvpsaqmj3jIQ2/view?usp=drive_link)
  2. Install the drivers (have an Arduino plugged in) [Arduino Drivers for Windows](https://drive.google.com/file/d/1N4CTs-A-gCkxT95O66jF0c6Au0xf9ItV/view?usp=drive_link) or [Arduino Drivers for MAC](https://drive.google.com/file/d/1N8Lot8dtUUb35Mb_IGzqSXzwtOSGLidK/view?usp=drive_link)

## Core Components
1. [Core Boilerplate](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/tree/main/Ardunio_Core_Boilerplate)
2. [Function Boilerplate](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/tree/main/Ardunio_Function_Boilerplate)
3. [OOP boilerplate](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/tree/main/Ardunio_OOP_Boilerplate)
4. [Arduino_Differential_Drive_Robot](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/tree/main/Arduino_Differential_Drive_Robot)
4. [Arduino_MAAS_Tinkershield_1st_Robot](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/tree/main/Arduino_MAAS_Tinkershield_1st_Robot)
4. [Arduino_Manipulator_Robot](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/tree/main/Arduino_Manipulator_Robot)
4. [Ardunio_AIDriver_Boilerplate](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/tree/main/Ardunio_AIDriver_Boilerplate)

## PipeLines
### Bootcamp PipeLine
1. Fork the [TempeHS Arduino Bootcamp](https://github.com/TempeHS/TempeHS_Ardunio_Bootcamp) to a repo called `2023IST-Arduino-Bootcamp.Ben.Jones` (year is the year you graduate, and the name is your name)
2. As we work through the Bootcamp, `COMMIT` every successful solution you code out and either a picture of the TINKERCAD or a photo of the Arduino and breadboard

### BoilerPlate PipeLine
1. Create a new GitHub Repo
2. Copy the contents of the desired Boilerplate to the root of your folder
3. Rename the *.ino file to be identical as the Repo name (Arduino IDE will error if syntax error)
4. For any `#INCLUDE` libraries, you need to copy the contents of the library folder into the root of your folder
5. Your `COMMIT`s should match your application development and testing

## TempeHS Actuators
- 180Deg Micro Servos Max load: plastic geared is 9g & metal geared is 13.4g
- 360Deg continuous Servos
  - Parralax Continuos Servo
  - ??? Continuos Servo
- Bi-axial right angle 1:48 DC geared hobby motor (plastic & metal geared)
- 3.7V 716RPM Micro Coreless DC Motors
- 3.7V 8520RMP Micro Coreless DC Motors
- 6V Motor with 75:1 metal gearbox providing 12 kg*cm (1.1 Nm) of torque at 133 rpm
- Water Pump Motor - DC 12V/370-04PM 
- 6v 130 sized DC hobby motor
- Haptic feedback module
- Vibration motor
*Note: we have a range of wheels and propellers for all our motors, or you can 3D design and manufacture your own*

## TempeHS Display Modules
- LCD & OLED Displays
- LED, LED Array, LED Bar
- Digit Displays  
*Read the documentation in the [TempeHS Sensor Catalogue](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/tree/main/TempeHS_Sensor_Catalogue) folder*

## TempeHS Sensors
[TempeHS Sensor Catalogue](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/tree/main/TempeHS_Sensor_Catalogue)
- Environmental Sensors
- Sound Sensors
- Colour and Light Sensors
- Physical Input
- Space and Movement
- Biomedical
- Electrical
*Read the documentation in the [TempeHS Sensor Catalogue](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/tree/main/TempeHS_Sensor_Catalogue) folder*

## TempeHS Shields & Modules
1. [DFRobot LCD/Button Shield](https://wiki.dfrobot.com/LCD_KeyPad_Shield_For_Arduino_SKU__DFR0009)
2. [Ardunio Motor Shield V3](https://store.arduino.cc/products/arduino-motor-shield-rev3)
3. [New HC-06 Bluetooth Module](https://www.aranacorp.com/en/arduino-and-bluetooth-module-hc-06/)
4. [Adafruit Music Maker MP3 Shield](https://learn.adafruit.com/adafruit-music-maker-shield-vs1053-mp3-wav-wave-ogg-vorbis-player)
5. [Sunfounder 4 Motor Drive Shield](http://wiki.sunfounder.cc/index.php?title=L293D_Motor_Driver_Shield) 
6. [Sparkfun Step Motor Driver](https://github.com/sparkfun/Easy_Driver)
7. Generic W5500 Ethernet & SD Card Shield - `#include <SPI.h>` & `#include <Ethernet.h>`
8. [Digital Line Sensor]()
9. [5x Analogue Line Sensor]()
10. [TZT TCS34725 Color Sensor Recognition Module](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/tree/main/TempeHS_Sensor_Catalogue/Examples/IIC_TCS34725_RGB_Color_Sensor)
11. [DHT22 Temp & Humidity Sensor](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/tree/main/TempeHS_Sensor_Catalogue/Examples/DHT22_Temp_and_Humid_Sensor)
12. [HC-SR04 Ultrasonic Sensor]()

*Note we have micro & SD cards for the MP3 & W5500 shields which both can also be used for data logging*

## Planning & Modelling Mechatronic Tools
1. Circuit design and testing: [TINKERCAD Circuits](https://www.tinkercad.com/dashboard?collection=designs&type=circuits)
2. Flow chart design: [Draw.IO Diagrams](https://app.diagrams.net/)
3. 3D Design & Models: [TempeHS_3D_Modelling_For_Mechatronics](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/tree/main/TempeHS_3D_Modelling_For_Mechatronics)
4. Psuedocode: [TempeHS Psuedocode CheatSheet & Examples](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/PsuedeoCode%20StyleGuide.pdf)
5. IPO Table: [Video Explaining IPO Tables](https://www.youtube.com/watch?v=a10a11oxjrA)

## TempeHS Power Supply
1. 9v Battery & holders
2. 1.5v AA Battery & 1x, 2x, 4x, 6x, 8x holders
3. 1.5v AAA Battery & 1x, 2x, 4x, 6x, 8x holders
4. 3.7v 18650 Polymer Lithium Ion Battery (LiPo) & 2x holders
5. 0-12v wired variable power source
6. 5v USB breadboard powerhead

## TempeHS Power Conditioning
1. DC to DC Step Down Module (Only suitable for large shifts in voltage and amperage)
2. Diodes
    1. 1N4934 1A 100V Rectifier Diode 0.7voltage drop
    2. 1N5404 3A 100V Rectifier Diode 0.7voltage drop
    3. 1N5819 1A 40V Schottky Rectifier Diode ~0.5voltage drop
    4. 1N5822 3A 40V Schottky Rectifier Diode ~0.5voltage drop     

***Notes:***
1. *Place in series for additive effect to voltage drop*
2. *Place in parralel for additive effect to amperage flow*

## TempeHS Power Over Current Control
1. 5x20 PCB Fuse Holder
2. 5x20 ceramic fast blow fuses:
    1. 1A
    2. 1.5A
    3. 2A
    4. 2.5A
    5. 3A

## TempeHS Electronic Components
- Nuts and Bolts - M3 M2.5 M2 M1.6
- Screws - M3 M2.5
- 1/4W Metal Film Resistor - 10 ohm ~1M Resistance 1%
- LED - RED GREEN BLUE ORANGE YELLOW CLEAR RGB Infrared
- Aluminum Electronic Capacitors - 0.1UF-1000UF
- Ceramic Capacitor - 1PF-100nF
- PNP/NPN transistors - 2N222 C1815 S9014 BC548 2N2904 C945 S9015 BC549 SN3906 S8050 BC327 BC550 2N5551 S8550 BC337 BC556 SN5551 S9012 BC517 BC557 A1015 S9013 BC547 BC558
- MOSFet - BS170 BS250 IRF9640 IRFZ24 IRF9630 IRFZ46 IRF540 IRF3710 IRF1010 IRF9630 IRF4905 IRF9540
- Diode - 1N4001 1N4004 1N4007 FR107 FR207 RL207 UF4007 1N4148 1N5817 1N5819 1N5404 1N5406 1N5408 1N5822
- Intergrated Circuits - NE555 LM324N LM393P UA741CN PC817 LM358P LM386N NE5532P ULN2803APG ULN2003APG
- Connectors - Double row screw terminal block PCB screw wire terminal block
- Switches - 3pin PCB sliding toggle switch NO momentary switches 3pin PCB mini limit switch NO NC 3 Pins PCB roller arc lever snap action push
- Light dependant resistors
- Potentiometer - 10M Linear
- Speaker - 8Ω 0.25W speaker, Piezo speaker
- Wire - 30 AWG wrapping wire 13x0.12 Hook-up wire Conductive tape 22 AWG solid core hook-up wire
- Prototyping PCB (cm x cm) - 3x7 4x6 5x7 7x9 9x15 12x18 10x22
*Note: These are the components we have on the shelf at school ready for use, not what you are limited to use*

## TempeHS Mechatronic & Electronic Tools
### Handtools
- Spanners
- P1 & P0 phillips screwdriver
- 3mm & 2mm flathead screwdriver
- Precision Tweezers
- Wire strippers
- IC Chip Extractor
- Network crimpers
- Digital vernier scale
- 150mm metal ruler
- Precision Screwdriver Kit
- Desoldering pump
- Locking scissor clamp

### Bench tools
- Soldering iron & air filter/extractor
- Networking testing tool
- Auto-scaling multimeter
- Third hand
- Silicon mats