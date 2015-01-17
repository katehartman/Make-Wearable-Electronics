/*
Make: Wearable Electronics
 Multiple Threshold example
 */

// initialize variables
int lightSensorValue = 0; 
int lightSensorPin = A2; 
int LEDpin = 11;
int threshold1 = 500; 
int threshold2 = 200;

void setup() {
  // initialize serial communication: 
  Serial.begin(9600);
}

void loop() {
  // read the light sensor pin and store value in a variable: 
  lightSensorValue = analogRead(lightSensorPin);

  // print the light sensor value
  Serial.print("Light Sensor Value: ");
  Serial.print(lightSensorValue);
  // get ready to print light level
  Serial.print(", Light Level: ");

  // if the value is greater than threshold #1 
  if(lightSensorValue>threshold1){
    Serial.println("daylight");
  }
  // if the value is less or equal to threshold #1 and greater than threshold #2
  else if(lightSensorValue>threshold2){
    Serial.println("desklamp");
  }
  // if the value is equal to or less than threshold #2
  else{
    Serial.println("dark");
  }
  // delay between readings:
  delay(100);
}


