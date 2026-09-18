#include <ESP32Servo.h>
// Don't forget to include the library!!
// From PlatfromIO library, search for ESP32 servo and add it to the project

// Define the servo and the pin it is connected to, what is your servo pin?
Servo myServo;
const int servoPin = 0;

// variable for random angle
int randomAngle;

// Variable for pulse width
int pulseWidth;

// Define the minimum and maximum pulse widths for the servo
const int minPulseWidth = 500; // 0.5 ms
const int maxPulseWidth = 2500; // 2.5 ms

void setup() {
  // Attach the servo to the specified pin and set its pulse width range
  myServo.attach(servoPin, minPulseWidth, maxPulseWidth);

  // Set the PWM frequency for the servo
  myServo.setPeriodHertz(50); // Standard 50Hz servo
}

void loop() {
    //  --- SECTION 1: Make a Random Angle Between 0 to 180 ---
    // randomAngle = ?; // random(A,B); returns a random value between A and B

    // ---SECTION 2: Map Pulse Width with Angle
    // pulseWidth = map(?, ?, ?, ?, ?, ?) // from Servo Motor.cpp, what did you learn from using map function?
    myServo.writeMicroseconds(pulseWidth); // writing pulse width to servo

    delay(1000); // change delay to your own preference
}