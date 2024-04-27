/*
  Purpose: Basic example of writing to a IIC 1602 LCD
  Notes: 
    1. See attached schematic
    2. Prefer the dedicated SDA/SCL pins to A4/A5
  Author: Ben Jones 25/4/24
  Contact: benjmain.jones21@det.nsw.edu.au
*/

#include <Wire.h> 
#include "LCD_I2C.h"

LCD_I2C lcd(0x27, 16, 2); 

void setup() {
  lcd.begin();
  lcd.backlight(); //open the backlight
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("Hello World");
}