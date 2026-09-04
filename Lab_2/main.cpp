#include <Arduino.h>
// Minh Hoang Nguyen_hmn39_ECSE 395 Lab #2: Learning ESP32

#define LED_PIN 13

void setup() {
  pinMode(LED_PIN, OUTPUT);
  // TODO: Baud rate is 115200 based on the ESP32
  Serial.begin(115200); // Start the Serial connection
}

void loop() {
  // TODO: Output text to the Serial Monitor
  Serial.println("First Blink Test_hmn39_ECSE 395");
  
  // TODO: Set up your delay in milliseconds
  digitalWrite(LED_PIN, HIGH); // LED On
  delay(100); // Speed in 100 milliseconds
  digitalWrite(LED_PIN, LOW); // LED Off
  delay(100); // Speed in 100 milliseconds
}
