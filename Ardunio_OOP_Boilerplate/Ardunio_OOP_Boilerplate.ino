/*
  Purpose: Turns an LED on for one second, then off for one second, repeatedly.
  Notes: Most Arduinos have an on-board LED you can control. On the UNO V3 it is 
  attached to digital pin 13 which is NOT a PWM pin.
  Author: Ben Jones 1/7/23
  Contact: benjmain.jones21@det.nsw.edu.au
  Source: https://youtu.be/S_uaROFnWSg & https://github.com/MrLegge/RoboCup
*/

#include "Objects.h"

//create variables one CarBase object and a boolean value for selection
	CarBase *myBase;

// The setup function runs once when you press reset or power the board
	void setup(){
		// inititise the serial monitor for debugging and output
  		Serial.begin(9600); 
	}
	
// The loop function runs over and over again forever
	void loop(){


	}

