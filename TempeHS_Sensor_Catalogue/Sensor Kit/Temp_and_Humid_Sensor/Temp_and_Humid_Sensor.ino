/*
  Purpose: Basic example of reading data from the Temperature & Humidity Sensor.
  Notes:
    1. Connect to I2C - default address 0x38
    2. Reading temperature or humidity takes about 250 milliseconds so Sensor readings may also be up to 2 seconds 'old'
    3. Measuring Humidity Range	0 ~ 100% RH
    4. Measuring Temperature Range	-40 ~ + 80 ℃
    5. Humidity Accuracy	± 3 % RH ( 25 ℃ )
    6. Temperature Accuracy	± 0.5 ℃
  Author: Ben Jones 14/7/23
  Contact: benjmain.jones21@det.nsw.edu.au
  Source: https://wiki.seeedstudio.com/Grove-Temperature-Humidity-Sensor-DH20/
  Library Source: https://github.com/Seeed-Studio/Grove_Temperature_And_Humidity_Sensor
*/

#include "Wire.h"
#include "DHT.h"
#define DHTTYPE DHT20   // DHT 20
DHT dht(DHTTYPE); 

void setup() {

    Serial.begin(9600);
    Wire.begin();
    dht.begin();
}

void loop() {
    float temp_hum_val[2] = {0};

        Serial.print("Humidity: ");
        Serial.print(temp_hum_val[0]);
        Serial.print(" %\t");
        Serial.print("Temperature: ");
        Serial.print(temp_hum_val[1]);
        Serial.println(" *C");

    delay(1500);
}