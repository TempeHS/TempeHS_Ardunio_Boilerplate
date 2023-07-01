/*
  Store your functions in this seperate file so your main.ino file is easy to read

  Written by Ben Jones
*/



// A function that waits for a second (1000 milliseconds)
void MyDelayFunction() {
  delay(1000); 
}

// A Function that toggles a bool value true to false or false to true 
void TogglePin() {
  LED_PIN_State = !LED_PIN_State; 
}


