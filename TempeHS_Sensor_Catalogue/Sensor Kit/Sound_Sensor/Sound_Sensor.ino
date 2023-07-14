/*
  Purpose: Example of the Seead sound level sensor where the sensor with make 32 samples of the sound level then output the average of those samples
  Notes:
    1. Connect to an anlogue pin
    2. This sound sensor is used to detect whether there is sound surround or not.
  Author: Ben Jones 14/7/23
  Contact: benjmain.jones21@det.nsw.edu.au
  Source: https://wiki.seeedstudio.com/Grove-Sound_Sensor/
*/

const int soundSensor = A0;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    long soundRead = 0;
    for(int i=0; i<32; i++)
    {
        sum += analogRead(soundRead);
    }

    // >>= is a bitwise shift right, the bits literally shift 5 places to the right 2^5 which is mathematically the same as diving by 32 but computationally much quicker.
    // You could also write soundRead /= 32; which is easier to read but slower to compute
    soundRead >>= 5; 
    Serial.print("Average Sensor Read Value:");
    Serial.println(soundRead);
    delay(10);
}