#include <ESP32Servo.h>
// Don't forget to include the library!!
// From PlatfromIO library, search for ESP32 servo and add it to the project

// Define the servo and the pin it is connected to, what is your servo pin?
Servo myServo;
const int servoPin = A0;

// variable for random angle
int randomAngle;
int randomDelay;

// Variable for pulse width
int pulseWidth;

// Define the minimum and maximum pulse widths for the servo
const int minPulseWidth = 1000; // 0.5 ms
const int maxPulseWidth = 2000; // 2.5 ms

void setup() {
  // Attach the servo to the specified pin and set its pulse width range
  myServo.attach(servoPin, minPulseWidth, maxPulseWidth);

  // Set the PWM frequency for the servo
  myServo.setPeriodHertz(100); // Standard 50Hz servo
}

void loop() {
  //  --- SECTION 1: Make a Random Angle Between 0 to 180 ---
  // randomAngle = ?; // random(A,B); returns a random value between A and B
  randomAngle = random(0, 1135);

  // ---SECTION 2: Map Pulse Width with Angle
  // pulseWidth = map(?, ?, ?, ?, ?, ?) // from Servo Motor.cpp, what did you learn from using map function?
  pulseWidth = map(randomAngle, 0, 135, minPulseWidth, maxPulseWidth);
  myServo.writeMicroseconds(pulseWidth); // writing pulse width to servo

  // ---Random delay between 50 to 1000 milliseconds
  randomDelay = random(50, 2000);
  delay(randomDelay); // change delay to your own preference
}
