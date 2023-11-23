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

	}
