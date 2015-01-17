/*
Make: Wearable Electronics
 Temperature Sensor example
 */

// This is a reference voltage for your power supply. 
// Measure it with a multimeter when running and change to the correct voltage. 
float supplyVoltage = 3.7;

int tempSensorPin = A2; 
int tempSensorValue; 
float tempSensorVoltage;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

void loop() {
  // read the temperature sensor value 
  tempSensorValue = analogRead(tempSensorPin);

  // convert the reading to voltage based off the reference voltage
  float tempSensorVoltage = (tempSensorValue * supplyVoltage)/1024.0;

  // convert the reading to Celsius
  // converting from 10 mv per degree with 500 mV offset
  float temperatureC = (tempSensorVoltage - 0.5) * 100;
  // to degrees ((tempSensorVoltage - 500mV) times 100)

  // print in Celsius
  Serial.print("Degrees C: ");
  Serial.print(temperatureC);

  // convert to Fahrenheit
  float temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;

  // print in Fahrenheit
  Serial.print(", Degrees F: ");
  Serial.println(temperatureF);

  delay(100);
}


