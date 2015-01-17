/*
Make: Wearable Electronics
 Wooo! Shirt Experiment
 */

// initialize variables
int lightSensorValue = 0; 
int lightSensorPin = A2; 
int LEDpin = 11;
int wooThreshold = 120;

void setup() {
  // initialize serial communication:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // read the value from the sensor 
  lightSensorValue = analogRead(lightSensorPin);

  // if the arm is up
  if(lightSensorValue>wooThreshold){ 
    //print Wooo! 
    Serial.print("Wooo!");
    // Turn LED on 
    digitalWrite(LEDpin, HIGH);
  }
  // if the arm is down
  else{
    // print boo 
    Serial.println("boo "); 
    // Turn LED off
    digitalWrite(LEDpin, LOW);
  }

  Serial.print(" Sensor Value: ");
  Serial.println(lightSensorValue);

  // delay between readings: 
  delay(100); 
}



