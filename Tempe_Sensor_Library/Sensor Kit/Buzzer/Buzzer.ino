/*
  Connect to digital Pin 6
  https://wiki.seeedstudio.com/Grove-Buzzer/
*/

/*
  Purpose: 
  Notes: 
  Author: Ben Jones ??/7/23
  Contact: benjmain.jones21@det.nsw.edu.au
  Source: 
*/

void setup()
{
  pinMode(6, OUTPUT);
}

void loop()
{
  digitalWrite(6, HIGH);
  delay(1000);
  digitalWrite(6, LOW);
  delay(1000);
}