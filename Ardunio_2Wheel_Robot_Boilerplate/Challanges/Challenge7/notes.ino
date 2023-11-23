/*  <- Do not delete

AIDRIVER METHODS:
 - mrJonesDriving->rotateRight(200); // speed can be between 0-255
 - mrJonesDriving->rotateLeft(200); 
 - mrJonesDriving->driveForward(200,200); //Make mrJonesDriving drive forward left wheel speed 200 and right wheel speeed 200
 - mrJonesDriving->driveBackward(200,200);
 - mrJonesDriving->brake(); //Make mrJonesDriving stop
 - distanceRanger.read(); Returns the measurement from teh ulatrasonic ranger in mm

ARDUINO METHODS:
 - delay(1000);  // Ardunio stops processing and continues in set state for duration
 - Serial.println(distanceRanger.read()); // Prints ranger state to the serial monitor
 - Serial.println("Hello World"); //Prints something to the serial monitor

CONTROL STRUCTURES
if (true){
  Serial.println("This is true")
}

if (true){
  Serial.println("This is true")
} else {
  Serial.println("This is false")
}

if (distanceRanger.read() >= 100){
  Serial.println("Obstical is more than 100mm away")
} else if (distanceRanger.read() >= 50) {
  Serial.println("Obstical is less than 50mm away")
} else {
  mrJonesDriving->brake();
}

While (distanceRanger.read() >= 500) {
  mrJonesDriving->driveForward(255,253);
}




Testing code:
#include "AIDriver.h"
#include "Ultrasonic.h"

//Instantiate a Ultrasonic Sensor called 'distanceRanger'
	Ultrasonic distanceRanger(6, 7);

// Declare a pointer to a AIDriver object
  AIDriver *mrJonesDriving;
 	
	void setup(){   // sets up once as the program starts
    //Configure and debug the serial monitor
    Serial.begin(9600);
    Serial.println("Debug Serial Monitor");
    
    //Instantiate a two wheeled to the pointer 'mrJonesDriving'
    mrJonesDriving = new AIDriver();
	}

	void loop(){ // loops continuously 50 times a second
      // Read the distanceRanger ulstrasonic sensor and return the object distance in mm
      Serial.println(distanceRanger.read());
			
      //obj->doSomething(); in this case make the object mrJonesDriving rotate to the right at a speed of 200
      mrJonesDriving->rotateRight(200); // speed can be between 0-255
			// wait 2000 milliseconds or 2 seconds
      delay(2000);
      mrJonesDriving->rotateLeft(200);
			delay(2000);
      //Make mrJonesDriving drive forward left wheel speed 200 and right wheel speeed 200
      mrJonesDriving->driveForward(200,200);
      mrJonesDriving->driveBackward(200,200);
      mrJonesDriving->brake();
      delay(2000);
	}
















































































*/// <- Do not delete