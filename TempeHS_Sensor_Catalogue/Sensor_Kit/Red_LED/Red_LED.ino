/*
  Purpose: Basic example of the Red LED Seead output module
  Notes: 
    1. Connect to a Digital Pin or Digital PWM pin for power control
  Author: Ben Jones 13/7/23
  Contact: benjmain.jones21@det.nsw.edu.au
  Source: https://www.seeedstudio.com/Grove-Red-LED.html
*/

static unsigned int red_LED = 3;


void setup () {
  Serial.begin(9600);
  pinMode(red_LED, OUTPUT);
}

void loop () {
  digitalWrite(red_LED, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(red_LED, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
    // fade in from min to max in increments of 5 points:
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue = fadeValue+5) {
    // sets the value (range from 0 to 255):
    analogWrite(red_LED, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue = fadeValue-5) {
    // sets the value (range from 0 to 255):
    analogWrite(red_LED, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
}