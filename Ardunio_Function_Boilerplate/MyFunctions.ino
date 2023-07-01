/*
  Purpose: Store your functions in this seperate file so your main.ino file is easy to read
  Author: Ben Jones 1/7/23
  Contact: benjmain.jones21@det.nsw.edu.au
  Source: https://youtu.be/mHa1mUd1Kmg
*/



// A function that waits for a second (1000 milliseconds)
void MyDelayFunction() {
  delay(1000); 
}

// A Function that toggles a bool value true to false or false to true 
void TogglePin() {
  LED_PIN_State = !LED_PIN_State; 
}

void DebugLED() {
  Serial.println("The LED connected to PIN " + String(LED_PIN) + " is " + String(LED_PIN_State))     // Print LED status to serial monitor
}
