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
	bool flag;
	
	void setup(){   // sets up once as the program starts
		myBase = new CarBase();
		flag = true;
	}

	void loop(){ // loops continuously 50 times a second

		if (flag){
			myBase->driveForward(255,255);
			delay(1000);
			flag = false;
		}else{
      myBase->driveForward(0,0);
    }
	}

