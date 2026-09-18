#include <Arduino.h>

// TODO: Define your pins
// Hint: Look at your wiring. Which pins did you use?
const int MOTOR_B_1A = A1; // Replace 0 with your pin number
const int MOTOR_B_1B = A0; // Replace 0 with your pin number


void setup() {
    Serial.begin(115200);

    pinMode(MOTOR_B_1A, OUTPUT);
    pinMode(MOTOR_B_1B, OUTPUT);  
 
    for (int speed = 64; speed < 255; speed++) {
        analogWrite(MOTOR_B_1A, speed);
        analogWrite(MOTOR_B_1B, 0);

        delay(20);
    }
    delay(1000);
    for (int speed = 255; speed > 64; speed--) {
        analogWrite(MOTOR_B_1A, speed);
        analogWrite(MOTOR_B_1B, 0);

        delay(20);
    }
    analogWrite(MOTOR_B_1A, 0);  
    analogWrite(MOTOR_B_1B, 0);
}

void loop() {

}

// Note:
// - Please modify the `analogWrite()`, swap the `analogWrite()`, and modify the `delay()`.
// - You don't have to put anything in the loop.
//      - If you would like to run the code again, please press the `RESET BUTTON` on your ESP32.
