/*
Make: Wearable Electronics
 Mapping example
 */

// initialize variables
int lightSensorValue = 0;
int lightSensorPin = A2;
int LEDpin = 11;
int mappedLightSensorValue = 0;

void setup() {
  // initialize serial communication: 
  Serial.begin(9600);
}

void loop() {
  // read light sensor pin and store value in a variable: 
  lightSensorValue = analogRead(lightSensorPin); 

  // map sensor value 
  mappedLightSensorValue = map(lightSensorValue, 0, 1023, 0, 255);

  // set analog output accordingly 
  analogWrite(LEDpin, mappedLightSensorValue);

  // print the sensor and mapped sensor values:
  Serial.print("Light Sensor Value: ");
  Serial.print(lightSensorValue);
  Serial.print(", Mapped Light Sensor Value: ");
  Serial.println(mappedLightSensorValue);

  // delay between readings:
  delay(100);
}


