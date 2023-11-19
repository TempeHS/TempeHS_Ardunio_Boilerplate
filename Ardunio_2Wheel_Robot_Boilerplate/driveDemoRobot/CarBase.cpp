
#include <Arduino.h>
#include "AIDriver.h"
#include "Ultrasonic.h"

  AIDriver::AIDriver(){
      // signal pins need to be pwm pins on the UNO board (~ near the number)
      rightSignal = 3;  //ENB
      leftSignal = 10;  //ENA
      // these pins don't need to be pwm
      rightIn1 = 5; //IN3
      rightIn2 = 4;  //IN4
      leftIn1 = 9;  //IN1
      leftIn2 = 6;  //IN2
      
      // the small cheap red motor controller available everywhere is the L298N
      motorRight = new L298N(rightSignal,rightIn1,rightIn2);
      motorLeft = new L298N(leftSignal,leftIn1,leftIn2);
    }
  void AIDriver::driveForward(unsigned short rightWheel, unsigned short leftWheel){
      motorRight->setSpeed(rightWheel);
      motorLeft->setSpeed(leftWheel);
      motorRight->backward();
      motorLeft->forward();
    }
  void CarBase::driveBackward(unsigned short rightWheel, unsigned short leftWheel){
      motorRight->setSpeed(rightWheel);
      motorLeft->setSpeed(leftWheel);
      motorRight->forward();
      motorLeft->backward();
    
    }
  void CarBase::rotateRight(unsigned short turnSpeed){
      motorRight->setSpeed(turnSpeed);
      motorLeft->setSpeed(turnSpeed);
      motorRight->backward();
      motorLeft->backward();
    
    }
  void CarBase::rotateLeft(unsigned short turnSpeed){
      motorRight->setSpeed(turnSpeed);
      motorLeft->setSpeed(turnSpeed);
      motorRight->forward();
      motorLeft->forward();
    
    }
  Ultrasonic::Ultrasonic(uint8_t trigPin, uint8_t echoPin, unsigned long timeOut) {
  trig = trigPin;
  echo = echoPin;
  threePins = trig == echo ? true : false;
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  timeout = timeOut;
}

unsigned int Ultrasonic::timing() {
  if (threePins)
    pinMode(trig, OUTPUT);

  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  delay(30);

  if (threePins)
    pinMode(trig, INPUT);
  
  previousMicros = micros();
  while(!digitalRead(echo) && (micros() - previousMicros) <= timeout); // wait for the echo pin HIGH or timeout
  previousMicros = micros();
  while(digitalRead(echo)  && (micros() - previousMicros) <= timeout); // wait for the echo pin LOW or timeout

  return micros() - previousMicros; // duration
}

unsigned int Ultrasonic::read(uint8_t) {
  return timing() / CM / 2;  //distance by divisor
}
