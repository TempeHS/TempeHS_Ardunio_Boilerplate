/*
  Author: 
  Learning Intention: The students will learn how to connect and control a continuous 360-degree servo.
  Success Criteria:
    1. I understand how to power the continuous Servo externally from the Arduino
    2. I understand the benefits of powering a motor externally
    2. I can manually write different directions and speeds to two servos
    3. I understand the advantages and disadvantages of a continuous servo over a motor and H bridge
    4. I understand that a continuous servo speed and direction is set by a frequency signal sent from the microcontroller

  Student Notes: 

  Documentation: 
    https://github.com/arduino-libraries/Servo <-- We are still using this library

  Schematic:
    https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/Ardunio_Bootcamp/12.motorFundamentals/12.mF.continuousServoMotor/Bootcamp-continuousServoMotor.png
*/

#include <Servo.h>

Servo leftMotor;  // create servo object to control the left continuous servo
Servo rightMotor;  // create servo object to control the right continuous servo

void setup() {
    // Associate the control pin with each motor
  leftMotor.attach(2);
  rightMotor.attach(4);

  // Set both servos to stationary.
  leftMotor.write(90);
  rightMotor.write(90);
}

void loop() {
    // Servo spins forward at full speed for 3 seconds.
  leftMotor.write(180);
  rightMotor.write(0);
  delay(3000);
  // Servo is stationary for 1 seconds.
  leftMotor.write(90);
  rightMotor.write(90);
  delay(1000);
  // Servo spins in reverse at full speed for 3 seconds.
  leftMotor.write(0);
  rightMotor.write(180);
  delay(3000);
  // Servo is stationary for 13 seconds.
  leftMotor.write(90);
  rightMotor.write(90);
  delay(1000);
}