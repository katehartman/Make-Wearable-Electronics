/*
Make: Wearable Electronics
 Gearhead Motor Digital Example
 */

//initialize variables
int motorPin = 9;

void setup() { 
  pinMode(motorPin, OUTPUT);
}

void loop () {
  // turn motor on 
  digitalWrite(motorPin, HIGH);
  delay(5000);
  // turn motor off 
  digitalWrite(motorPin, LOW); 
  delay(1000);
}

