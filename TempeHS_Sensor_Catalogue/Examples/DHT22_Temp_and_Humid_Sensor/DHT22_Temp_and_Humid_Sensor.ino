/*
  Purpose: Basic example of reading data from DHT22 Sensor
  Notes: 
    1. See attached schematic
    2. Servo atatched to pin 7
  Author: Ben Jones 26/4/24
  Contact: benjmain.jones21@det.nsw.edu.au
*/

#include "AM2302-Sensor.h"

const unsigned int SENSOR_PIN = 7;

AM2302::AM2302_Sensor am2302(SENSOR_PIN);

void setup() {
  Serial.begin(9600);
  am2302.begin();
}

void loop() {
  Serial.print("Temperature: ");
  Serial.println(am2302.get_Temperature());

  Serial.print("Humidity:    ");
  Serial.println(am2302.get_Humidity());
  delay(5000);
}