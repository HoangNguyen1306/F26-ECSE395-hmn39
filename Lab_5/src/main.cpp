#include <Arduino.h>

const int TOUCH_PIN  = A0;
const int BUZZER_PIN = 33;

const int BUZZ_FREQUENCY_HZ = 1000;

const int PWM_CHANNEL    = 0;
const int PWM_RESOLUTION = 8;

void setup() {
  Serial.begin(115200);

  pinMode(TOUCH_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  
  ledcSetup(PWM_CHANNEL, BUZZ_FREQUENCY_HZ, PWM_RESOLUTION);
  ledcAttachPin(BUZZER_PIN, PWM_CHANNEL);
  ledcWrite(PWM_CHANNEL, 0);

  Serial.println("Touch to buzz the buzzer!");
}

void buzzerOn() {
  ledcWriteTone(PWM_CHANNEL, BUZZ_FREQUENCY_HZ);
}

void buzzerOff() {
  ledcWrite(PWM_CHANNEL, 0);
}

void loop() {
  int sensorValue = analogRead(TOUCH_PIN);

  // Define a threshold for touch detection
  const int TOUCH_THRESHOLD = 500;

  if (sensorValue > TOUCH_THRESHOLD) {
    buzzerOn();
  } else {
    buzzerOff();
  }

  Serial.println(sensorValue > TOUCH_THRESHOLD ? "Touched -> BUZZ" : "Not touched");

  delay(20);
}
