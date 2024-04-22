/***********************************************************************

A low code 2 wheel robot library designed and written by Ben Jones @ Tempe High School
Licenses:
Code is GNUGPL licensed: https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/Ardunio_2Wheel_Robot_Boilerplate/myAIDriver/LICENSE
Content is Creative Commons licensed: https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/LICENSE

Source acknowledgements:
 - Original OOP concept and source Phil Legge: https://github.com/MrLegge/RoboCup No explict license
 - Ultrasonic source Erick Simoes: https://github.com/ErickSimoes/Ultrasonic MIT license: https://github.com/ErickSimoes/Ultrasonic/blob/master/LICENSE
 - L298N source Andrea Lombardo: https://github.com/AndreaLombardo/L298N GNUGPL license: https://github.com/AndreaLombardo/L298N/blob/master/LICENSE
Last modified 22/12/2023

***********************************************************************/

#ifndef AIDRIVER_H
#define AIDRIVER_H
#include "L298N.h"

class AIDriver{
  public:
    AIDriver();
    
    void driveForward(unsigned short rightWheel, unsigned short leftWheel);
    void driveBackward(unsigned short rightWheel, unsigned short leftWheel);
    void rotateRight(unsigned short turnSpeed);
    void rotateLeft(unsigned short turnSpeed);
    void brake();
    unsigned int read();

  private:
    L298N *motorRight;
    L298N *motorLeft;
    unsigned long previousMicros;
    unsigned int timing();
};

#endif 