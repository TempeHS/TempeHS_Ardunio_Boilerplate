/*
  Author: 
  Learning Intention: The students will learn how to connect and control two direct wired motors.
  Success Criteria:
    1. I can wire two basic motors
    2. I understand that the reverse polarity is why they spin in different directions
    3. I can control the motor speed with a potentiometer
    4. I understand that this is a rarely needed use case for motors and a microcontroller

  Student Notes: 

  Documentation: 
    
  Schematic:
    https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/Ardunio_Bootcamp/12.motorFundamentals/12.mF.basicMotor/Bootcamp-basicMotor.png
*/

void setup () {
 pinMode(12, OUTPUT);
 digitalWrite(12,HIGH);
}

void loop () {
  
}