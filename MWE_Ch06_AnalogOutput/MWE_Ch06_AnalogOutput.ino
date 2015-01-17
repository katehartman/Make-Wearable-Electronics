/*
Make: Wearable Electronics
 Analog Output example
 */
 
// LED is connected to pin 11:
int LEDpin = 11; 

void setup() {
  // set pin as output:
  pinMode(LEDpin, OUTPUT); 
}
void loop() { 
  // LED completely off 
  analogWrite(LEDpin, 0); 
  delay(100);
  analogWrite(LEDpin, 50); 
  delay(100);
  analogWrite(LEDpin, 100);
  delay(100);
  analogWrite(LEDpin, 150);
  delay(100);
  analogWrite(LEDpin, 200); 
  delay(100); 
  // LED at full brightness
  analogWrite(LEDpin, 255); 
  delay(100);
}

