/*
Make: Wearable Electronics
 Servo example
 */

#include <Servo.h>

// name your servo
Servo mrSpinny; 

int servoPin = 9;

void setup() {
  // set the servo pin
  mrSpinny.attach(servoPin);
}

void loop() {
  // turn to 0 degree position
  mrSpinny.write(0);
  // wait 1000 milliseconds 
  delay(1000); 
  mrSpinny.write(45); 
  delay(300); 
  mrSpinny.write(90); 
  delay(300); 
  mrSpinny.write(135); 
  delay(300); 
  mrSpinny.write(180);
  delay(1000);
}

