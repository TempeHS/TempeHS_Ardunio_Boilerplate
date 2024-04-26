/*
  Purpose: Basic example using LED matrix as a UI
  Notes: 
    1. Use https://ledmatrix-editor.arduino.cc/ to draw shapes
    2. requires Arduino Uno Wifi R4
    3. Documentation here (including scrolling text) https://docs.arduino.cc/tutorials/uno-r4-wifi/led-matrix/
  Author: Ben Jones 26/4/24
  Contact: benjmain.jones21@det.nsw.edu.au
*/

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

  matrix.beginDraw();
  matrix.stroke(0xFFFFFFFF);
  matrix.textScrollSpeed(50);
  const char text[] = "v0.0.001";
  matrix.textFont(Font_4x6);
  matrix.beginText(0, 1, 0xFFFFFF);
  matrix.println(text);
  matrix.endText();
  matrix.endDraw();

  delay(3000);

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