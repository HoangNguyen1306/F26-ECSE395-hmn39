#include <Arduino.h>

// TODO: Define your pins
// Hint: Look at your wiring. Which pins did you use?
const int MOTOR_B_1A = A1;
const int MOTOR_B_1B = A0; 

void setup() {
  // TODO: Initialize Serial communication
  Serial.begin(115200);

  // TODO: Set your motor pins as OUTPUTs
  pinMode(MOTOR_B_1A, OUTPUT);
  pinMode(MOTOR_B_1B, OUTPUT); 

  Serial.println("Tuned Torque Motor Initiated, Start!");
}

void loop() {
  // --- SECTION 1: Clockwise (5s) ---
  Serial.println("_____");
  
  //TODO: Write HIGH to one pin and LOW to the other
  digitalWrite(MOTOR_B_1A, HIGH);
  digitalWrite(MOTOR_B_1B, LOW);
  
  delay(5000);

  // --- SECTION 2: Stop (2s) ---
  Serial.println("_____");
  
  // TODO: Turn off the motor
  digitalWrite(MOTOR_B_1A, LOW);
  digitalWrite(MOTOR_B_1B, LOW);

  delay(2000);

  // --- SECTION 3: Counterclockwise (5s) ---
  Serial.println("_____");
  
  // TODO: Write HIGH to one pin and LOW to the other
  digitalWrite(MOTOR_B_1A, LOW);
  digitalWrite(MOTOR_B_1B, HIGH);

  delay(5000);

  // --- SECTION 4: Stop (2s) ---
  Serial.println("_____");
  
  //TODO: Turn off the motor
  digitalWrite(MOTOR_B_1A, LOW);
  digitalWrite(MOTOR_B_1B, LOW);

  delay(2000);
}


// Note:
// - Please uncomment the necessary lines and fill in the blank to complete the assignment.
