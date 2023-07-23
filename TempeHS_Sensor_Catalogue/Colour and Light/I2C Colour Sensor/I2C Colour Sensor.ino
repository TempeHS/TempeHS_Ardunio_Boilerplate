/*
  Purpose: This module can be used to detect the color of light source or the color of objects.
  Notes: 
    Check version & add library
    This module can be used to detect the color of light source or the color of objects.
    When used to detect the color of the light source, the led switch should be turned off, and the light source should shine the sensor directly.
    When used to detect the color of things, the led should be on and you should put the object on the top of the enclosure closely.
    The theory of sensing the color of objects is Reflective Sensing Theory.
    See this image:
  Author: Ben Jones ??/7/23
  Contact: benjmain.jones21@det.nsw.edu.au
  Source: https://wiki.seeedstudio.com/Grove-I2C_Color_Sensor/
*/

#include <Wire.h>
#include <GroveColorSensor.h>
#include <ChainableLED.h>
 
#define CLK_PIN   7
#define DATA_PIN  8
#define NUM_LEDS  1            //The number of Chainable RGB LED
 
ChainableLED leds(CLK_PIN, DATA_PIN, NUM_LEDS);
 
void setup()
{
    Serial.begin(9600);
    Wire.begin();
}
 
void loop()
{
    int red, green, blue;
    GroveColorSensor colorSensor;
    colorSensor.ledStatus = 1;            // When turn on the color sensor LED, ledStatus = 1; When turn off the color sensor LED, ledStatus = 0.
    while(1)
    {
        colorSensor.readRGB(&red, &green, &blue);    //Read RGB values to variables.
        delay(300);
        Serial.print("The RGB value are: RGB( ");
        Serial.print(red,DEC);
        Serial.print(", ");
        Serial.print(green,DEC);
        Serial.print(", ");
        Serial.print(blue,DEC);
        Serial.println(" )");
        colorSensor.clearInterrupt();
        for(int i = 0; i<NUM_LEDS; i++)
        {
            leds.setColorRGB(i, red, green, blue);
        }
    }
}