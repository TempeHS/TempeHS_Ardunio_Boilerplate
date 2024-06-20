/*
  Purpose: Basic example using LED matrix as a UI
  Notes: 
    1. Must install ArduinoGraphics from the Library Manager https://github.com/arduino-libraries/ArduinoGraphics
	2. Arduino_LED_Matrix is installed by board manager with R4 package
	2. Use https://ledmatrix-editor.arduino.cc/ to draw shapes
    2. requires Arduino Uno Wifi R4
    3. Documentation here (including scrolling text) https://docs.arduino.cc/tutorials/uno-r4-wifi/led-matrix/
  Author: Ben Jones 20/6/24
  Contact: benjmain.jones21@det.nsw.edu.au
*/

#include "ArduinoGraphics.h"
#include "Arduino_LED_Matrix.h"

const uint32_t arrow_left[] = {
		0x400c01c,
		0x3fc3fc1,
		0xcc0cc04c,
		66
};

const uint32_t arrow_right[] = {
		0x2003003,
		0x83fc3fc3,
		0x38330320,
		66
};

const uint32_t arrow_up[] = {
		0x600f01f,
		0x83fc0600,
		0x60060060,
		66
};

const uint32_t arrow_down[] = {
		0x6006006,
		0x603fc1,
		0xf80f0060,
		66
};

ArduinoLEDMatrix matrix;

void setup() {
  Serial.begin(9600);
   matrix.begin();
   matrix.textFont(Font_5x7);
   matrix.textScrollSpeed(100);
   matrix.stroke(0xFF, 0, 0);
   matrix.beginText(0, 1, 0xFF, 0, 0);
   matrix.print("V00.00.01");
   matrix.endText(SCROLL_LEFT);
}

void loop() {
  matrix.loadFrame(arrow_left);
  delay(500);

  matrix.loadFrame(arrow_right);
  delay(500);
  
  matrix.loadFrame(arrow_up);
  delay(500);

  matrix.loadFrame(arrow_down);
  delay(500);

}