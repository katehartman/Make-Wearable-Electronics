/*
Make: Wearable Electronics
 XBee Arduino example
 */

// initialize variables
int lightSensorPin = A0; 
int lightSensorValue = 0;

void setup() {
  // initialize serial communication 
  Serial.begin(9600);
}

void loop() {
  // read the light sensor value
  int lightSensorValue = analogRead(lightSensorPin);
  // print the value of the light sensor 
  Serial.println(lightSensorValue); 
  delay(100);
}

