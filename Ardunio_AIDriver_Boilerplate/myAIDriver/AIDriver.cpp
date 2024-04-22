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
  // Digital Pins for the Ultrasonic Sensor
  static uint8_t trigPin = 6;
  static uint8_t echoPin = 7;

  // L298N Motor controller
  motorRight = new L298N(rightSpeedIn,rightDirection,rightBreak);
  motorLeft = new L298N(leftSpeedIn,leftDirection,leftBreak);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  //Configure and debug the serial monitor
  Serial.begin(9600);
  Serial.println("Debug Serial Monitor");
}

unsigned int AIDriver::read() {
  return timing() / 2.8 / 2;  //distance by divisor
}

unsigned int AIDriver::timing() {
  delay(30);
  static uint8_t trig = 6;
  static uint8_t echo = 7;
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  previousMicros = micros();
  while(!digitalRead(echo) && (micros() - previousMicros) <= 20000UL); // wait for the echo pin HIGH or timeout
  previousMicros = micros();
  while(digitalRead(echo)  && (micros() - previousMicros) <= 20000UL); // wait for the echo pin LOW or timeout
  if (micros() - previousMicros > 3000) {
    return 0;
  } else {
    return micros() - previousMicros; // duration
  }  
}

void AIDriver::brake(){
  motorRight->stop();
  motorLeft->stop();
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
  motorRight->forward();
  motorLeft->forward();
}

void AIDriver::rotateLeft(unsigned short turnSpeed){
  motorRight->setSpeed(turnSpeed);
  motorLeft->setSpeed(turnSpeed);
  motorRight->backward();
  motorLeft->backward();
}
