/*
  Purpose: Basic example of writing text to the OLED display
  Notes:
    1. Connect to I2C - 0x78 default address can be changed to 0x78
    2. Monochrome(white) 128×64 pixels
    3. Navigate to Sketch -> Include Library -> Manage Libraries... and Search and Install U8g2 library in the Library Manager
    4. Read the manual for doing more than writing simple text
  Author: Ben Jones 14/7/23
  Contact: benjmain.jones21@det.nsw.edu.au
  Source: https://wiki.seeedstudio.com/Grove-OLED-Display-0.96-SSD1315/
  Manual: https://github.com/olikraus/u8g2/wiki/u8g2reference
  Library Source: https://github.com/olikraus/u8g2
*/

#include <Arduino.h>
#include <U8g2lib.h>
#include <Wire.h>

U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* clock=*/ SCL, /* data=*/ SDA, /* reset=*/ U8X8_PIN_NONE);  // High speed I2C

void setup(void) {
  u8g2.begin();
}

void loop(void) {
  u8g2.clearBuffer();                  // clear the internal memory
  u8g2.setFont(u8g2_font_ncenB08_tr);  // choose a suitable font
  u8g2.setCursor(0, 10);              // Set cursor to first line
  u8g2.print("Hello World!");         // write something to the internal memory
  u8g2.sendBuffer();                  // transfer internal memory to the display
  delay(1000);  
}