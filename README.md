# Ardunio Boilerplate

## Index
1. [Core Components](#Core-Components)
2. [PipeLines](#PipeLines)
    1. [Bootcamp PipeLine](#Bootcamp-PipeLine)
    2. [BoilerPlate PipeLine](#BoilerPlate-PipeLine)
3. [TempeHS Actuators](#TempeHS-Actuators)
    1. [Motors](#Motors)
    2. [Output Modules](#Output-Modules)
4. [TempeHS Sensors](#TempeHS-Sensors)
5. [TempeHS Shields & Modules](#TempeHS-Shields--Modules)
6. [Planning & Modelling Mechatronic Tools](#Planning--Modelling-Mechatronic-Tools)
7. [TempeHS Power Supply](#TempeHS-Power-Supply)
8. [TempeHS Electronic Components](#TempeHS-Electronic-Components)
9. [TempeHS Mechatronic & Electronic Tools](#TempeHS-Mechatronic--Electronic-Tools)
    1. [Handtools](#Handtools)
    2. [Bench tools](#Bench-tools)

## Core Components
1. Before you begin, [set up Visual Studio Code](https://github.com/TempeHS/VisualStudioCodeSetup).
2. [Core Boilerplate](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/tree/main/Ardunio_Core_Boilerplate)
3. [Function Boilerplate](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/tree/main/Ardunio_Function_Boilerplate)
4. [OOP boilerplate](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/tree/main/Ardunio_OOP_Boilerplate)

## PipeLines
### Bootcamp PipeLine
1. Create a new GitHub Repo
2. Copy the contents of the Ardunio_Bootcamp folder the root of your folder
3. As we work through the Bootcamp, `COMMIT` every succesful solution you code out and either a picture of the TINKERCAD or a photo of the Ardunio and breadboard

### BoilerPlate PipeLine
1. Create a new GitHub Repo
2. Copy the contents of the desired Boilerplate to the root of your folder
3. Rename the *.ino file to be identical as the Repo name (Arduino IDE will error if synax error)
4. For any `#INCLUDE` libraries you need copy the contents of the library folder into the root of your folder
5. Your `COMMIT`s should match your application development and testing

## TempeHS Actuators
[TempeHS Sensor Catalogue](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/tree/main/TempeHS_Sensor_Catalogue)
- 9g 180Deg Micro Servos 
- 360Deg continuous Servos
- Bi axial right angle 1:48 DC geared hobby motor
- Haptic feedback
- 3.7V 716RPM Micro Coreless DC Motors
- 3.7V 8520RMP Micro Coreless DC Motors
- 6V Motor with 75:1 metal gearbox providing 12 kg*cm (1.1 Nm) of torque at 133 rpm
- Water Pump Motor - DC 12V/370-04PM 
- 6v 130 sized DC hobby motor 
*Note: we have a range of wheels and propellers for all our motors or you can 3D deisgn and manufacture your own*

## TempeHS Display Modules
[TempeHS Sensor Catalogue](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/tree/main/TempeHS_Sensor_Catalogue)
- LCD & OLED Displays
- LED, LED Array, LED Bar
- Digit Displays  

## TempeHS Sensors
[TempeHS Sensor Catalogue](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/tree/main/TempeHS_Sensor_Catalogue)
- Environmental Sensors
- Sound Sensors
- Colour and Light Sensors
- Physical Input
- Space and Movement
- Biomedical
- Electrical

## TempeHS Shields & Modules
1. [DFRobot LCD/Button Shield](https://wiki.dfrobot.com/LCD_KeyPad_Shield_For_Arduino_SKU__DFR0009)
2. [Ardunio Motor Shield V3](https://store.arduino.cc/products/arduino-motor-shield-rev3)
3. [New HC-06 Bluetooth Module](https://www.aranacorp.com/en/arduino-and-bluetooth-module-hc-06/)
4. [Adafruit Music Maker MP3 Shield](https://learn.adafruit.com/adafruit-music-maker-shield-vs1053-mp3-wav-wave-ogg-vorbis-player)
5. [Sunfounder 4 Motor Drive Shield](http://wiki.sunfounder.cc/index.php?title=L293D_Motor_Driver_Shield) 
6. [Sparkfun Step Motor Driver](https://github.com/sparkfun/Easy_Driver)
7. Generic W5500 Ethernet & SD Card Shield - `#include <SPI.h>` & `#include <Ethernet.h>`
*Note we have micro & SD cards for the MP3 & W5500 shields which both can also be used for data logging*

## Planning & Modelling Mechatronic Tools
1. Circuit design and testing: [TINKERCAD Circuits](https://www.tinkercad.com/dashboard?collection=designs&type=circuits)
2. Flow chart design: [Draw.IO Diagrams](https://app.diagrams.net/)
3. 3D Design & Models: [TempeHS_3D_Modelling_For_Mechatronics](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/tree/main/TempeHS_3D_Modelling_For_Mechatronics)
4. Psuedocode: [TempeHS Psuedocode CheatSheet & Examples](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/PsuedeoCode%20StyleGuide.pdf)
5. IPO Table: [Video Explaining IPO Tables](https://www.youtube.com/watch?v=a10a11oxjrA)

## TempeHS Power Supply
1. 9v Battery & holders
2. 4x 1.5v AA Battery & holders
3. 6x 1.5v AA Battery & holders
4. 2x 3.7v 18650 LiOion battery & holders
5. 0-12v wired variable power source
6. 5v USB breadboad powerhead

## TempeHS Electronic Components
- Nuts and Bolts - M3 M2.5 M2 M1.6
- 1/4W Metal Film Resistor - 10 ohm ~1M Resistance 1%
- LED - RED GREEN BLUE ORANGE YELLOW CLEAR RGB
- Aluminum Electronic Capacitors - 0.1UF-1000UF
- Ceramic Capacitor - 1PF-100nF
- PNP/NPN transistors - 2N222 C1815 S9014 BC548 2N2904 C945 S9015 BC549 SN3906 S8050 BC327 BC550 2N5551 S8550 BC337 BC556 SN5551 S9012 BC517 BC557 A1015 S9013 BC547 BC558
- MOSFet - BS170 BS250 IRF9640 IRFZ24 IRF9630 IRFZ46 IRF540 IRF3710 IRF1010 IRF9630 IRF4905 IRF9540
- Intergrated Circuits - NE555 LM324N LM393P UA741CN PC817 LM358P LM386N NE5532P ULN2803APG ULN2003APG
- Connectors - Double row screw terminal block PCB screw wire terminal block
- Switches - 3pin PCB sliding toggle switch NO momentary switches 3pin PCB mini limit switch NO NC 3 Pins PCB roller arc lever snap action push
- Light dependant resistors
- Potentiometer - 10M Linear
- Speaker - 8Ω 0.25W speaker, Piezo speaker
- Wire - 30 AWG wraping wire 13x0.12 Hook up wire Conductive tape
*Note: These are the components we on the shelf at school, not what you are limited to use*

## TempeHS Mechatronic & Electronic Tools
### Handtools
- Spanners
- P1 phillips screwdriver
- 3mm flathead screwdriver
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
- Auto scaling multimeter
- Third hand
- Silicon mats