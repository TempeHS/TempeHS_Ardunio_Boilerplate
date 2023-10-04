/*
  Purpose: 
  Notes: 
    4x 125V @ 6A Ports which can accept 30-20 AWG wire
      GND
      VC (3.3/5V)
      Undefinded
      Undefinded
  Author: Ben Jones 21/7/23
  Contact: benjmain.jones21@det.nsw.edu.au
  Source: https://wiki.seeedstudio.com/Grove-Screw_Terminal/
*/

static unsigned int MAGNECTIC_SWITCH = 2
static unsigned int myLED = 13 //the on board LED of the Arduino

void setup()
{
    pinMode(MAGNECTIC_SWITCH, INPUT);
    pinMode(LED,OUTPUT);
}

void loop() 
{
    if(isNearMagnet())//if the magnetic switch is near the magnet?
    {
        turnOnLED();
    }
    else
    {
        turnOffLED();
    }
}


/*If the magnetic switch is near the magnet, it will return ture, */
/*otherwise it will return false                                */
boolean isNearMagnet()
{
    int sensorValue = digitalRead(MAGNECTIC_SWITCH);
    if(sensorValue == HIGH)//if the sensor value is HIGH?
    {
        return true;//yes,return ture
    }
    else
    {
        return false;//no,return false
    }
}

void turnOnLED()
{
    digitalWrite(LED,HIGH);
}

void turnOffLED()
{
    digitalWrite(LED,LOW);
}