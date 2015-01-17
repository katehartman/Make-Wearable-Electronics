/*
Make: Wearable Electronics
 Analog Input example
 */

// initialize variable for light sensor reading
int lightSensorValue = 0;
// initialize variable for light sensor pin
int lightSensorPin = A2;

void setup() {
  // initialize serial communication at 9600 bps 
  Serial.begin(9600);
}

void loop() {
  // read pin and store value in a variable: 
  lightSensorValue = analogRead(lightSensorPin); 

  // print the light sensor value: 
  Serial.println(lightSensorValue);

  // delay between readings:
  delay(100);
}


