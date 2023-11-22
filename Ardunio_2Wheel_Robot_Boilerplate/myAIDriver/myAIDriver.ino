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
