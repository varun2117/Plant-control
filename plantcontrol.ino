int sensor = 0;
const int sensorPin1 = A0;// Analog pin connected to the sensor
const int sensorPin2 = A2;// Analog pin connected to the sensor
const int sensorPin3 = A3;// Analog pin connected to the sensor
const int threshold1 = 300; // Threshold value for the sensor reading
const int threshold2 = 250; // Threshold value for the sensor reading
const int threshold3 = 350; // Threshold value for the sensor reading
const int outputPin2 = 12; // Digital pin for output signal
const int outputPin1 = 8; // Digital pin for the LED indicator
const int outputPin3 = 4; // Digital pin for the LED indicator
const int outputPin4 = 7; // Digital pin for the LED indicator
const int tempPin = A1; // Analog pin for temperature sensor

void setup()
{
  pinMode(sensorPin1, INPUT);
  pinMode(sensorPin2, INPUT);
  pinMode(sensorPin3, INPUT);
  pinMode(outputPin1, OUTPUT);
  pinMode(outputPin2, OUTPUT);
  pinMode(outputPin3, OUTPUT);
  pinMode(outputPin4, OUTPUT);
  pinMode(tempPin, INPUT);
  Serial.begin(9600); // Initialize serial communication for debugging
}

void loop()
{
  int baselineTemp = 55;
  int highlinetemp = 10;
  int sensor1 = analogRead(sensorPin1);
  int sensor2 = analogRead(sensorPin2);
  int sensor3 = analogRead(sensorPin3);
  Serial.print("Sensor Value: ");
  Serial.println(sensor); // Print sensor value to the serial monitor
  
  if (sensor1 > threshold1) {
    digitalWrite(outputPin1, HIGH); // Output HIGH signal
  } else {
    digitalWrite(outputPin1, LOW); // Output LOW signal
  }
  if (sensor2 > threshold2) {
    digitalWrite(outputPin3, HIGH); // Output HIGH signal
  } else {
    digitalWrite(outputPin3, LOW); // Output LOW signal
  }  
  if (sensor3 > threshold3) {
    digitalWrite(outputPin4, HIGH); // Output HIGH signal
  } else {
    digitalWrite(outputPin4, LOW); // Output LOW signal
  }
  int temp1 = analogRead(tempPin); // Map the temperature reading
  int temp = map(((temp1 - 20) * 3.04), 0, 1023, -40, 125);
  Serial.print("Temperature: ");
  Serial.println(temp); // Print temperature value to the serial monitor
  
  if (temp <= baselineTemp && temp >= highlinetemp ){
    digitalWrite(outputPin2, HIGH); // Output HIGH signal
  } else {
    digitalWrite(outputPin2, LOW); // Output LOW signal
  }
  
  delay(1000); // Wait for 1 second
}
