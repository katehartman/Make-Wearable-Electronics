/*
Make: Wearable Electronics
 Flora NeoPixel example with 3 pixels
 */

#include <Adafruit_NeoPixel.h>
// The digital pin used to control the pixel strip
int pinNumber = 6;
// The number of pixels in the strip
int numberOfPixels = 3;
Adafruit_NeoPixel strip = Adafruit_NeoPixel(numberOfPixels, pinNumber, NEO_GRB + NEO_KHZ400);

void setup() {
  // initialize pixel strip 
  strip.begin();
  // set pixels to off to begin 
  strip.show();
}
void loop() {
  // set pixel 0 to yellow
  strip.setPixelColor(0, 255, 255, 0); 
  // set pixel 1 to pink 
  strip.setPixelColor(1, 255, 51, 153); 
  // set pixel 2 to yellow 
  strip.setPixelColor(2, 255, 255, 0); 
  strip.show();
  delay(1000);

  // set pixel 0 to pink
  strip.setPixelColor(0, 255, 51, 153); 
  // set pixel 1 to yellow 
  strip.setPixelColor(1, 255, 255, 0); 
  // set pixel 2 to pink 
  strip.setPixelColor(2, 255, 51, 153); 
  strip.show();
  delay(1000);

  // turn pixel 0 off
  strip.setPixelColor(0, 0, 0, 0); 
  // turn pixel 1 off 
  strip.setPixelColor(1, 0, 0, 0); 
  // turn pixel 2 off 
  strip.setPixelColor(2, 0, 0, 0); 
  strip.show();
  delay(1000);
}

