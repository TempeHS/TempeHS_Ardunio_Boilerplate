/*
  Author: 
  Learning Intention: The students will learn what 'pulse width modulation' is and how to use it to write analogue data on a digital PIN.
  Success Criteria:
    1. I understand what pulse width modulation is
    2. I can identify the PWM PINS on the Arduino Uno
    3. I can wire an RGB LED for PWM control in TINKERCAD
    5. I can write PWM data to multiple pins and manually change the colour of the LED

  Student Notes: 

  Documentation: 
    https://www.w3schools.com/colors/colors_rgb.aspt
  Schematic:
    https://www.tinkercad.com/things/drNDsMxGMIY?sharecode=D6x4_xTTRl_zGs7B-XGqfbQhG_xgjj3TVS_c-GNTK-c
    https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/Ardunio_Bootcamp/06.pulseWidthModulation/Bootcamp-PWMOutput.png
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