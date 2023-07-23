/*
  Purpose: A sensor that detects the presence of Carbon Monoxide, Coal Gas, Liquefied Gas.
  Notes: 
    Analogue or Digital Sensor
    As an analogue sensor the output voltage from the Gas sensor increases when the concentration of gas increases.
    As a digital sensor the pin out will output low for no gas present or high for gas present.
    Sensitivity can be adjusted by varying the potentiometer.
    The sensor does not report the differnet gases 
    When you first use the sensor after it has been stored for a long time (a month or more), it needs to be warmed up for 24-48 hours to ensure it works accurately.
    To warm up a MQ sensor, just connect its VCC and GND pins to a power supply or arduino.
  Author: Ben Jones 23/7/23
  Contact: benjmain.jones21@det.nsw.edu.au
  Source: https://wiki.seeedstudio.com/Grove-Gas_Sensor-MQ9/
*/

void setup() {
    Serial.begin(9600);
}

void loop() {
    float sensor_volt;
    float sensorValue;

    sensorValue = analogRead(A0);
    sensor_volt = sensorValue/1024*5.0;

    Serial.print("sensor_volt = ");
    Serial.print(sensor_volt);
    Serial.println("V");
    delay(1000);
}