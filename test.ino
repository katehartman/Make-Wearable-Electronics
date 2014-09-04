/*
Make: Wearable Electronics
Digital Input example
*/
//variable for the digital input pin
int buttonPin = 5;
//variable for the reading from the button
int buttonValue = 0;
void setup() {
// initialize serial communication
// at 9600 bps
Serial.begin(9600);
// set pin as input
// use internal pull-up resistor
pinMode(buttonPin, INPUT_PULLUP);
}
void loop() {
// read input pin:
buttonValue = digitalRead(buttonPin);
// print button value:
Serial.println(buttonValue);
delay(100);
}
