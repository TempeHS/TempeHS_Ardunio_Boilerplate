#include <Arduino.h>
#include "AIDriver.h"

AIDriver::AIDriver(){
  // signal pins need to be ~pwm pins
  static unsigned int rightSignal = 3;  //ENB 3
  static unsigned int leftSignal = 11;  //ENA 11
  // Must be digital pins
  static unsigned int rightIn1 = 12; //IN3 12
  static unsigned int rightIn2 = 0;  //IN4 9
  static unsigned int leftIn1 = 13;  //IN1 13
  static unsigned int leftIn2 = 0;  //IN2 8

  // L298N Motor controller
  motorRight = new L298N(rightSignal,rightIn1,rightIn2);
  motorLeft = new L298N(leftSignal,leftIn1,leftIn2);
}

void AIDriver::driveForward(unsigned short rightWheel, unsigned short leftWheel){
  motorRight->setSpeed(rightWheel);
  motorLeft->setSpeed(leftWheel);
  motorRight->backward();
  motorLeft->forward();
}

void AIDriver::driveBackward(unsigned short rightWheel, unsigned short leftWheel){
  motorRight->setSpeed(rightWheel);
  motorLeft->setSpeed(leftWheel);
  motorRight->forward();
  motorLeft->backward();
}

void AIDriver::rotateRight(unsigned short turnSpeed){
  motorRight->setSpeed(turnSpeed);
  motorLeft->setSpeed(turnSpeed);
  motorRight->backward();
  motorLeft->backward();
}

void AIDriver::rotateLeft(unsigned short turnSpeed){
  motorRight->setSpeed(turnSpeed);
  motorLeft->setSpeed(turnSpeed);
  motorRight->forward();
  motorLeft->forward();
}



