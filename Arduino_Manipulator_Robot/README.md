# Arduino Manipulator Robot Boilerplate
Design and build an autonomous OOP-controlled manipulator robot prototype for a industrial assembley line. The core function of your robot is to use an end effector to pick and sort 25*25*25mm coloured cubes. As part of your design, you can define or design the pick and sort zones. There is no specification for the degrees of freedom as long as the robot can perform its core function. Your robot must be able to sort at least two different colours. You can choose from black, white, blue, green or red cubes, which will be provided for you.

## Core Components
1. Up to 6x 270° or 180° RDS3115mg Servo Motors
2. Arduino Uno
3. HC-SR04 Ultrasonic Sensor
4. [IIC TZT TCS34725](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/tree/main/TempeHS_Sensor_Catalogue/Examples/IIC_TCS34725_RGB_Color_Sensor) RGB color sensor or Digital Line Finder to sense black or white.
5. Robot Clamp Gripper
6. Servo Brackets
7. Rotating head base
8. Dupont Cables
9. 2x 3.7v 18650 Polymer Lithium Ion Battery
10. 2x LiPo holder
11. Diodes
12. 5x20 PCB Fuse holder 
13. 5x20 fuse
14. 100µF 25v capacitor for each servo

## Optional Components
1. [IIC LCD Screen](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/tree/main/TempeHS_Sensor_Catalogue/Examples/IIC_1602_LCD)
2. DHT22 Temperature & Humidityity sensor ([improve ranger accuracy](https://github.com/SpulberGeorge/EasyUltrasonic/tree/main))
