/*
Make: Wearable Electronics
 Gearhead Motor Analog Example
 */

// initialize variables
int motorPin = 9; 

void setup() {
}

void loop () {
  // turn motor off 
  analogWrite(motorPin, 0); 
  delay(500);

  // spin motor slowly 
  analogWrite(motorPin, 100); 
  delay(5000);

  // turn motor off 
  analogWrite(motorPin, 0); 
  delay(500);

  // spin motor at full speed 
  analogWrite(motorPin, 255); 
  delay(5000);
}


