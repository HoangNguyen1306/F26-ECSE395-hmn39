# ECSE 395: Junior Engineering Design Seminar Lab

*Minh Hoang Nguyen - hmn39 - Lab 4: Adventure with Actuators - 18th September 2026*

# Lab 4: Adventure with Actuators
## *Overview*

**Course:** ECSE 395 — Junior Engineering Design Seminar

**Date:** September 18th, 2026

**Instructor:** Professor Michael Fu

## *Lab 4 Assignment Purpose*

The purpose of Lab 4 is to connect and control actuators with the ESP32. I worked with a Tuned Torque motor  and a servo motor, and I changed code parameters to see how each change altered the motors' behavior, including the extra credit one

By completing this lab, I will be able to:

- Connect a TT motor and a servo motor to an ESP32.
- Control the TT motor through a motor driver.
- Operate the servo motor with PWM.
- Upload and run C++ code on the ESP32 with PlatformIO.
- Change motor and servo parameters and observe the movement they produce.
- Distinguish a servo motor from a DC gear motor.
- Document the hardware setup, code changes, and results.

## *Steps Completed to Finish This Lab*
1. Set up the Lab 4 folder in my ECSE 395 GitHub repository.
2. created and edited actuator_adventures.md.
3. Opened the Lab 4 project on VSCode through PlatformIO.
4. Connected the ESP32 to computer using a USB-C data cable.
5. Take the TT motor and L9110 motor driver, plus the SG90 servo motor and a breadboard.
6. Built the TT motor circuit on the breadboard with the ESP32, TT motor, L9110 motor driver, and jumper wires, following the provided picture.
7. Set the benchtop DC power supply to a maximum of 3 V and 0.15 A.
8. Uploaded TT `Motor Rotate.cpp` to the ESP32 with PlatformIO.
9. Changed the analogWrite() values one at a time and recorded how the motor responded.
10. Swapped the analogWrite() values and recorded the change in motor direction and speed.
11. Modified the delay() values and recorded how the timing of the movement shifted.
12. Rewrote `TT Motor Rotate`.cpp so the motor:
13. Pushed the updated code and documentation to the GitHub repository.
14. Recorded a video of the modified TT motor and submitted it to Canvas.
15. Post-Class Task: Servo Motor
16. Built the servo motor circuit with the ESP32, SG90 servo motor, breadboard, and jumper wires, following the provided schematic.
17. Set the benchtop DC power supply to a maximum of 5 V and 0.75 A.
18. Uploaded `Servo Motor.cpp` to the ESP32 with PlatformIO.
19. Watched the servo sweep from 0° to 180° and back to 0°.
20. Changed these parameters one at a time and recorded each effect:
- minPulseWidth
- maxPulseWidth
- setPeriodHertz
- Rotation range
- delay()
21. Modified Servo Motor `Random.cpp` so the servo moves to random angles between 0° and 180° with varied delays.
23. Saved the modified servo code and pushed it to the GitHub repository.
24. Recorded a video of the modified servo and submitted it to Canvas.

## *Coding File Names*

The coding files for this lab are in the /Lab_4/.src folder:

`TT Motor.cpp`
`TT Motor Rotation.cpp`
`TT Motor EC.cpp`
`Servo Motor.cpp`
`Servo Motor Random.cpp`
`Servo Motor EC.cpp`

## *How changing the values in TT Motor Rotate.cpp changes the behavior:
- **Modifying analogWrite():** Change the value makes the speed of the TT motor different, higher value is faster while lower value is slower.
- **Swapping analogWrite():** Swap the value changes the rotation orientation of the TT motor.
- **Modifying delay():** Changing the delay makes the motor run for a longer or shorter period depending on the value

## *How changing the values in Servo Motor.cpp changes the behavior:*
- **minPulseWidth:** I changed the value from 500 to 1000, and see the servo's minimum position changes.
- **maxPulseWidth:** I changed the value from 2500 to 2000, and see the servo's maximum position changes.
- **setPeriodHertz:** I changed the value from 50 to 100, and there's not much difference outside of the movement being more sudden or jittery.
- **Rotation range:** I changed the value from 180 to 135, and the servo rotate less than before.
- **delay:** I changed the value from 1000 to 2000, and see the servo stay at the above command for a longer period.

## *Time Reporting and Reflection*
1. It took me about 150 minutes to finish all of the task including spinning the Tuned Torque Motor, Servo Motor and the extra credits.
2. I would associate this assignment with low difficulty.
3. (I associated the assignment with low difficulty earlier)
4. As of current, I'm feeling comfortable with the contents.
5. (I don't have any additional feedback for the instructors and the teaching assistant.
