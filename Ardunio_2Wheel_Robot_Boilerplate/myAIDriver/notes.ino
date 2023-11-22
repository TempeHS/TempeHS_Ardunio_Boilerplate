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




















































































*/// <- Do not delete