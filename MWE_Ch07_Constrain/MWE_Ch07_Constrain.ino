/*
Make: Wearable Electronics
 Constrain example
 */

// initialize variables
int lightSensorPin = A2;
int lightSensorValue = 0;
int constrainedLightSensorValue = 0;

void setup() {
  // initialize serial communication: 
  Serial.begin(9600);
}

void loop() {
  // read light sensor pin and store value in a variable:
  lightSensorValue = analogRead(lightSensorPin); 

  // constrain the light sensor values to 300 to 650
  constrainedLightSensorValue = constrain(lightSensorValue, 300, 650);

  // print the results:
  Serial.print("Light Sensor Value ");
  Serial.print(lightSensorValue);
  Serial.print(", Constrained Light Sensor Value: ");
  Serial.println(constrainedLightSensorValue);

  // delay between readings:
  delay(100);
}

