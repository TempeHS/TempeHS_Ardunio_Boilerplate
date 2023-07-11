/*
  Author: 
  Learning Intention: The students will learn to break their code into reusable chunks called functions
    1. I understand how a function is called
    2. I can break a simple program like LED blick into functions that I can be re-use
    3. I know the computation term 'abstraction.'
    4. I can create separate my functions into functions.ino files to make my code more manageable
    5. I can return values from a function and use the value in my code
    6. I can pass values into my functions to make them more secure
    7. I know the computation term encapsulation

  Student Notes:
    
  Documentation: 
    https://www.youtube.com/watch?v=mHa1mUd1Kmg

  Schematic:
      
*/

int LED_PIN = 13;
bool LED_PIN_State = HIGH;
int randomNum09;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_PIN, OUTPUT);
  // inititise the serial monitor for debugging and output
  Serial.begin(9600); 
  randomSeed(analogRead(0));
}

void loop() {
  TogglePin(); //Call the TogglePin function
  digitalWrite(LED_PIN, LED_PIN_State); //Set PIN state
  DebugLED(); // Write PIN state to the serial monitor for debugging
  MyDelayFunction(); //Call the MyDelayFunction

  generateRandomNumber();
  Serial.println(randomNum09);
  // take through to Serial.println(generateRandomNumber(0, 9)); and back 1 step

}

// A function that waits for a second (1000 milliseconds)
void MyDelayFunction() {
  delay(1000); 
}

// A Function that toggles a bool value true to false or false to true 
void TogglePin() {
  LED_PIN_State = !LED_PIN_State; 
}

void DebugLED() {
  Serial.println("The LED connected to PIN " + String(LED_PIN) + " is " + String(LED_PIN_State));     // Print LED status to serial monitor
}

void generateRandomNumber () {
  randomNum09 = random(0, 9);
}

