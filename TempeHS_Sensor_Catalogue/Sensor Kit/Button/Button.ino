/*
  Purpose: Basic example of the Red LED Seead output module
  Notes: 
  Author: Ben Jones 13/7/23
  Contact: benjmain.jones21@det.nsw.edu.au
  Source: https://www.seeedstudio.com/Grove-Red-LED.html
*/

static unsigned int myButton = 3;

void setup() {
  Serial.begin(9600);
  pinMode(myButton, INPUT);
}

void loop() {
  Serial.print("myButton:");
  Serial.println(digitalRead(myButton));
}