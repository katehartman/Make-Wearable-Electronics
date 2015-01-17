/*
Make: Wearable Electronics
 Single Threshold example
 */

// initialize variables
int lightSensorValue = 0; 
int lightSensorPin = A2; 
int LEDpin = 11;

void setup() {
  // initialize serial communication: 
  Serial.begin(9600);
}
void loop() {
  // read the light sensor pin and store value in a variable: 
  lightSensorValue = analogRead(A2);

  // if it is "dark"
  if(lightSensorValue<200){ 
    // Turn LED on 
    digitalWrite(LEDpin, HIGH);
  }
  // if it is "light"
  else{
    // Turn LED off 
    digitalWrite(LEDpin, LOW);
  }
  // delay between readings:
  delay(100);
}


