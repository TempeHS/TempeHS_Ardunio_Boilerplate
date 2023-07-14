/*
  Purpose: Basic example of the Rotary Potentiometer Seead input sensor
  Notes: Max light = 800 / Min Light = 0
  Author: Ben Jones ??/7/23
  Contact: benjmain.jones21@det.nsw.edu.au
  Source: https://wiki.seeedstudio.com/Grove-Light_Sensor/
*/

static unsigned int lightSensorPIN = A0;

void setup()
{
    Serial.begin(9600);
    pinMode(lightSensorPIN, INPUT); 
}

void loop()
{   
  static unsigned int sensorValue = analogRead(lightSensorPIN);
  static unsigned int PWMMapOutput = map(sensorValue, 0, 800, 0, 255); //example only not used in this application

  Serial.println(analogRead(sensorValue));
}
