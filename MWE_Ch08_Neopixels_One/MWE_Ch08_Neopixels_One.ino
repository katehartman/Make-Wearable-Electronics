/*
Make: Wearable Electronics
 Flora NeoPixel example with 1 pixel
 */

#include <Adafruit_NeoPixel.h>
// The digital pin used to control the pixel strip
int pinNumber = 6;
// The number of pixels in the strip
int numberOfPixels = 1;
Adafruit_NeoPixel strip = Adafruit_NeoPixel(numberOfPixels, pinNumber, NEO_GRB + NEO_KHZ400);

void setup() {
  // initialize pixel strip 
  strip.begin();
  // set pixels to off to begin 
  strip.show();
}

void loop() {
  // set pixel 0 to red 
  strip.setPixelColor(0, 255, 0, 0); 
  strip.show();
  delay(500);

  // set pixel 0 to green
  strip.setPixelColor(0, 0, 255, 0);
  strip.show();
  delay(500);

  // set pixel 0 to blue
  strip.setPixelColor(0, 0, 0, 255);
  strip.show();
  delay(500);

  // turn pixel 0 off
  strip.setPixelColor(0, 0, 0, 0);
  strip.show();
  delay(1000);
}


