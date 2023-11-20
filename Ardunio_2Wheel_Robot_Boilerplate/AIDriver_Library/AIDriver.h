#ifndef AIDRIVER_H
#define AIDRIVER_H
#include "L298N.h"

class AIDriver{
  public:
    const int MAX_SPEED = 255; 
    const int THREE_QUARTER_SPEED = 138; 
    const int HALF_SPEED = 92; 
    const int QUARTER_SPEED = 46;  
    const int MIN_SPEED = 15; 
    int rightSignal, rightIn1, rightIn2; 
    int leftSignal, leftIn1, leftIn2;

    AIDriver();

    void driveForward(unsigned short rightWheel, unsigned short leftWheel);
    void driveBackward(unsigned short rightWheel, unsigned short leftWheel);
    void rotateRight(unsigned short turnSpeed);
    void rotateLeft(unsigned short turnSpeed);

  private:
    L298N *motorRight;
    L298N *motorLeft;
};

#endif 
