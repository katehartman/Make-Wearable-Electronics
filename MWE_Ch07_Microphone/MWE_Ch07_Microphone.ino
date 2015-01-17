/*
Make: Wearable Electronics
 Mic Example
 Based on "Example Sound Level Sketch for the
 Adafruit Microphone Amplifier"
 http://bit.ly/1qlN7hk
 */

int micPin = A2;
// Sample window width in mS (50 mS = 20Hz)
int sampleWindow = 50;

void setup(){ 
  Serial.begin(9600);
}

void loop() {
  // Start of sample window
  unsigned long startMillis = millis(); 
  int amplitude;
  int micReading;
  int maxReading = 0;
  int minReading = 1024;
  // collect mic readings and find the max and min
  while (millis() - startMillis < sampleWindow){
    micReading = analogRead(micPin);
    if (micReading > maxReading){ 
      maxReading = micReading; //save the maximum reading
    }
    else if (micReading < minReading){
      minReading = micReading;
      // save the minimum reading
    } 
  }
  // find the amplitude
  amplitude = (maxReading - minReading);
  Serial.println(amplitude);
}


