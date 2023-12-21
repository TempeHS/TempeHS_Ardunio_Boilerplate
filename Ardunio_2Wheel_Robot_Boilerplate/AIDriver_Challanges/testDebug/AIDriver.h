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