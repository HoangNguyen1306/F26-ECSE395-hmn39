# ECSE 395: Junior Engineering Design Seminar Lab

*Minh Hoang Nguyen - hmn39 - Lab 5: ESP32 Sensor and Actuator Integration - 23rd September, 2026*

# Lab 5: Integration Exploration
## *Overview*

**Course:** ECSE 395 — Junior Engineering Design Seminar

**Date:** September 23rd, 2026

**Instructor:** Professor Michael Fu

This is my last assignment working with the ESP32 for this course. Going forward, my work will focus on integrating sensors and actuators together to build a "smart system." I uploaded code to the ESP32 using PlatformIO on [INSERT: Mac/Windows/Linux].

For this lab, I selected the **Touch Sensor Module** as my sensor and the **Passive Buzzer Module** as my actuator. This combination was not on the list of disallowed pairings, so it was a valid choice for this assignment.

## *What's in This Repository*

The code that integrates the touch sensor and passive buzzer can be found in `main.cpp` in the `/Lab_5/.src` folder.

## *System Behavior*

When the touch sensor is touched, the ESP32 reads a HIGH signal on its input pin and immediately drives the passive buzzer to sound continuously. As soon as contact with the touch sensor is released, the ESP32 reads LOW and the buzzer stops immediately — there is no delay or cooldown between touches.

## *Steps Completed to Finish This Lab*
1. Set up the Lab 5 folder in my ECSE 395 GitHub repository.
2. Created `integration_exploration.md`.
3. Reviewed Table 1 in the Lab 5 handout and selected the Touch Sensor Module (sensor) and Passive Buzzer Module (actuator), confirming the pairing was not on the disallowed list.
4. Opened the Lab 5 project on VSCode through PlatformIO.
5. Connected the ESP32 to the computer using a USB-C data cable.
6. Wired the touch sensor's I/O pin and the passive buzzer to the ESP32 on a breadboard.
7. Wrote `main.cpp` so that the buzzer turns on continuously while the touch sensor is touched and turns off as soon as it is released.
8. Uploaded the code to the ESP32 with PlatformIO and tested the behavior using the Serial Monitor.
9. Recorded a video of the working touch sensor and buzzer integration and submitted it as a Canvas comment on the Lab 5 assignment.
10. Took a picture of the circuit for this document.
11. Pushed `main.cpp`, `integration_exploration.md`, and the circuit picture to the GitHub repository.

## *Coding File Names*

The coding file for this lab is in the `/Lab_5/.src` folder:

`main.cpp` — reads the touch sensor's digital output and drives the passive buzzer accordingly.

## *Circuit Picture and Wiring Explanation*

[INSERT IMAGE OF CIRCUIT HERE]

**Wiring:**
- Touch Sensor Module: VCC → 3.3V, GND → GND, OUT → GPIO [INSERT PIN NUMBER USED]
- Passive Buzzer Module: + → GPIO [INSERT PIN NUMBER USED] (PWM), − → GND

## *Video Demonstration*

[INSERT VIDEO LINK / EMBED HERE]

## *Time Reporting and Reflection*
1. [INSERT: How long did it take you to complete this assignment?]
2. [INSERT: Difficulty level — Low / Medium / High]
3. [INSERT: If medium/high, what was most difficult?]
4. [INSERT: How comfortable do you currently feel with the course content?]
5. [INSERT: Any additional feedback for the instructors/TA?]

*Note: I did not complete the extra credit portion of this lab.*
