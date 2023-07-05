/*
  Purpose: Turns an LED on for one second, then off for one second, repeatedly.
  Notes: Most Arduinos have an on-board LED you can control. On the UNO V3 it is 
  attached to digital pin 13 which is NOT a PWM pin.
  Author: Ben Jones 1/7/23
  Contact: benjmain.jones21@det.nsw.edu.au
  Source: https://youtu.be/mHa1mUd1Kmg
*/

// Store the Pin value as an interger so it can be used on pin and digital methods below.
int LED_PIN = 13;

// The setup function runs once when you press reset or power the board
void setup() {
  // initialise digital pin LED_BUILTIN as an output.
  pinMode(LED_PIN, OUTPUT);
  // inititise the serial monitor for debugging and output
  Serial.begin(9600); 
}

// The loop function runs over and over again forever
void loop() {
  digitalWrite(LED_PIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  Serial.println("LED ON!");    // Print LED status to serial monitor
  delay(1000);                      // wait for a second (1000 milliseconds)
  digitalWrite(LED_PIN, LOW);   // turn the LED off by making the voltage LOW
  Serial.println("LED OFF!");     // Print LED status to serial monitor
  delay(1000);                      // wait for a second (1000 milliseconds)
}
