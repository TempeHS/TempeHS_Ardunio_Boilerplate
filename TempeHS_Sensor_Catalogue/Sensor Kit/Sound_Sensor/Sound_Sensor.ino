/*
  Purpose: 
  Notes:
    1. This sound sensor is used to detect whether there's sound surround or not.
    2. Connect to analgue PIN
  Author: Ben Jones ??/7/23
  Contact: benjmain.jones21@det.nsw.edu.au
  Source: https://wiki.seeedstudio.com/Grove-Sound_Sensor/
*/

const int soundSensor = A0;

void setup()
{
    Serial.begin(115200);
}

void loop()
{
    long sum = 0;
    for(int i=0; i<32; i++)
    {
        sum += analogRead(soundSensor);
    }

    sum >>= 5; // reduces the math required to caluate final value called a BitWise shift.
    Serial.print("Sensor Read Value:");
    Serial.println(sum);
    delay(10);
}