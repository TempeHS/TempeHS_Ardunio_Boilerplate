#include <Arduino.h>
#include "AIDriver.h"

AIDriver::AIDriver(){
  // signal pins need to be ~pwm pins
  static unsigned int rightSpeedIn = 3;  //0-255 sets speed for right wheel - default 3
  static unsigned int leftSpeedIn = 11;  //0-255 sets speed for left wheel - default 11
  // Must be digital pins
  static unsigned int rightDirection = 12; //0 = Forward, 1 = Backward for right wheel default 12
  static unsigned int rightBreak = 9;  //0 = Go, 1 = Break for right wheel default 9
  static unsigned int leftDirection = 13;  //0 = Forward, 1 = Backward for left wheel default 13
  static unsigned int leftBreak = 8;  //0 = Go, 1 = Break for right wheel default 8

  // L298N Motor controller
  motorRight = new L298N(rightSpeedIn,rightDirection,rightBreak);
  motorLeft = new L298N(leftSpeedIn,leftDirection,leftBreak);
}

void AIDriver::brake(){
  motorRight->stop();
  motorLeft->stop();
}

void AIDriver::driveForward(unsigned short rightWheel, unsigned short leftWheel){
  motorRight->setSpeed(rightWheel);
  motorLeft->setSpeed(leftWheel);
  motorRight->forward();
  motorLeft->forward();
}

void AIDriver::driveBackward(unsigned short rightWheel, unsigned short leftWheel){
  motorRight->setSpeed(rightWheel);
  motorLeft->setSpeed(leftWheel);
  motorRight->backward();
  motorLeft->backward();
}

void AIDriver::rotateRight(unsigned short turnSpeed){
  motorRight->setSpeed(turnSpeed);
  motorLeft->setSpeed(turnSpeed);
  motorRight->backward();
  motorLeft->forward();
}

void AIDriver::rotateLeft(unsigned short turnSpeed){
  motorRight->setSpeed(turnSpeed);
  motorLeft->setSpeed(turnSpeed);
  motorRight->forward();
  motorLeft->backward();
}