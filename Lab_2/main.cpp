#include <Arduino.h>
// Minh Hoang Nguyen_hmn39_ECSE 395 Lab #2: Learning ESP32

#define LED_PIN 13

void setup() {
  pinMode(LED_PIN, OUTPUT);
  // TODO: Define your baud rates
  Serial.begin(115200); // Start the Serial connection
}

void loop() {
  // TODO: Define your text output
  Serial.println("First Blink Test_hmn39_ECSE 395"); // Print the words to the Serial Monitor.
  
  // TODO: Set up your delay in milliseconds
  digitalWrite(LED_PIN, HIGH); // LED On
  delay(100); // Speed in 100 milliseconds
  digitalWrite(LED_PIN, LOW); // LED Off
  delay(100); // Speed in 100 milliseconds
}
