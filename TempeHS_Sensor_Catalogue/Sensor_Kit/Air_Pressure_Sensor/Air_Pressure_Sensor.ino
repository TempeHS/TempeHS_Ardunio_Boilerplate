/*
  Purpose: Basic example of reading data from the Air Pressure Sensor
  Notes: 
    1. Connect to I2C - 0x77 default or 0x76
    2. Operating temperature	-40 - 85 ℃
    3. Effective pressure measurement range 300 - 1100 hPa (1 hPa= one hundred Pa) with ±1.0 hPa accuracy
    4. Temperature measurement accuracy ±1.0°C
  Author: Ben Jones 14/7/23
  Contact: benjmain.jones21@det.nsw.edu.au
  Source: https://wiki.seeedstudio.com/Grove-Barometer_Sensor/
  Library Source: https://github.com/Seeed-Studio/Grove_BMP280
*/

#include "Seeed_BMP280.h"
#include <Wire.h>

BMP280 bmp280;

void setup()
{
  Serial.begin(9600);
  if(!bmp280.init()){
    Serial.println("Device error!");
  }
}

void loop()
{
  float pressure;

  //get and print temperatures
  Serial.print("Temp: ");
  Serial.print(bmp280.getTemperature());
  Serial.println("C"); // The unit for  Celsius because original arduino don't support speical symbols

  //get and print atmospheric pressure data
  Serial.print("Pressure: ");
  Serial.print(pressure = bmp280.getPressure());
  Serial.println("Pa");

  //get and print altitude data
  Serial.print("Altitude: ");
  Serial.print(bmp280.calcAltitude(pressure));
  Serial.println("m");

  Serial.println("\n");//add a line between output of different times.

  delay(1000);
}