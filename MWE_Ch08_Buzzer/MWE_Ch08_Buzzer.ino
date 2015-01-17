/*
Make: Wearable Electronics
 Buzzer example
 */

int buzzerPin = 9;

void setup() { 
  pinMode(buzzerPin, OUTPUT);
}

void loop() { 
  digitalWrite(buzzerPin, HIGH); 
  delay(500); 
  digitalWrite(buzzerPin, LOW); 
  delay(3000);
}

