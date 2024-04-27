/*
  Purpose: Basic example of IIC RGB Color Sensor TCS34725
  Notes: 
    1. All Libraries required or you can install "Adafruit TCS34725" from library manager
    2. See wiring schematic, dedicated SCL/SDA shoudl be preffered
  Author: Ben Jones 25/4/24
  Contact: benjmain.jones21@det.nsw.edu.au
*/

#include <Wire.h>
#include "Adafruit_TCS34725.h"

// our RGB -> eye-recognized gamma color
byte gammatable[256];

Adafruit_TCS34725 tcs = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X);

void setup() {
  Serial.begin(9600);
  //Serial.println("Color View Test!");

  if (tcs.begin()) {
    //Serial.println("Found sensor");
  } else {
    Serial.println("No TCS34725 found ... check your connections");
    while (1); // halt!
  }

  // Convert RGB colors to what humans see
  for (int i=0; i<256; i++) {
    float x = i;
    x /= 255;
    x = pow(x, 2.5);
    x *= 255;

    gammatable[i] = 255 - x;

  }
}


void loop() {
  float red, green, blue;

  delay(60);  // takes 50ms to read

  tcs.getRGB(&red, &green, &blue);

  Serial.print("R:\t"); Serial.print(int(red)); 
  Serial.print("\tG:\t"); Serial.print(int(green)); 
  Serial.print("\tB:\t"); Serial.print(int(blue));

  Serial.print("\n");

}
