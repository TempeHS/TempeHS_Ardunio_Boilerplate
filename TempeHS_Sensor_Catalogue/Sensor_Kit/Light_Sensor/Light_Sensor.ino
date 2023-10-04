/*
  Purpose: Basic example of reading data from the Seead light sensor
  Notes: 
    1. Connect to a analogue pin
    2. Max light = 800 / Min Light = 0
    3. The light sensor value only reflects the approximated trend of the intensity of light, it DOES NOT represent the exact Lumen.
  Author: Ben Jones 14/7/23
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
  static unsigned int PWMMapOutput = map(sensorValue, 0, 800, 0, 255); //example of mapping to PWM but this value is not used in this application

  Serial.println(analogRead(sensorValue));
}
