/*
Make: Wearable Electronics
 Tone example
 */
 
int C = 1047; 
int D = 1175; 
int E = 1319; 
int F = 1397; 
int G = 1568; 
int A = 1760; 
int B = 1976; 
int c = 2093;
int buzzerPin = 9;

void setup() {
  pinMode (buzzerPin, OUTPUT);
}

void loop() { 
  tone(buzzerPin, C, 250); 
  delay(300); 
  tone(buzzerPin, E, 250); 
  delay(300); 
  tone(buzzerPin, G, 250); 
  delay(300); 
  tone(buzzerPin, c, 250); 
  delay(300); 
  tone(buzzerPin, G, 250); 
  delay(300); 
  tone(buzzerPin, E, 250); 
  delay(300); 
  tone(buzzerPin, C, 500); 
  delay(1000);
}

