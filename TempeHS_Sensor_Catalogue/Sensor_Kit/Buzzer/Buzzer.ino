/*
  Purpose: Basic example of the Seead Buzzer output module
  Notes: 
    1. Connect to a PWN Digital pin
    2. Songs https://github.com/robsoncouto/arduino-songs
  Author: Ben Jones 13/7/23
  Contact: benjmain.jones21@det.nsw.edu.au
  Source: https://www.seeedstudio.com/Grove-Buzzer.html
*/

static unsigned int myBuzzer = 3;

void setup () {
  Serial.begin(9600);
  pinMode(myBuzzer, OUTPUT);
}

void loop () {
  digitalWrite(myBuzzer, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(myBuzzer, LOW);
  delay(3000); // Wait for 1000 millisecond(s)
  tone(myBuzzer, 1000); // Send 1KHz sound signal...
  delay(1000);        // ...for 1 sec
  tone(myBuzzer, 750); // Send 1KHz sound signal...
  delay(1000);        // ...for 1 sec
  tone(myBuzzer, 500); // Send 1KHz sound signal...
  delay(1000);        // ...for 1 sec
  tone(myBuzzer, 250); // Send 1KHz sound signal...
  delay(1000);        // ...for 1 sec
  noTone(myBuzzer);     // Stop sound...
  delay(1000);        // ...for 1sec
}