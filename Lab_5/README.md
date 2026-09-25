# Welcome to integration exploration!
In this lab you will have the freedom to combine a sensor and an actuator to create a *smart system* of your own design.

To use this repository: clone this repository, open your PlatformIO home page, click on `open project`, and select the folder you cloned.

## Checklist
To check that you have all the necessary components:
### Hardware
- ESP32 (Adafruit Feather V2)
- USB Cable (making sure that is not charging only)
- Your choice of sensor and actuator
- Breadboard
- Jumper Wires
### Software
This step assumes you have VS Code and PlatformIO installed from previous labs.
- VS Code
- PlatformIO Extension

<!-- ### Your Goal
- Combine a sensor and an actuator to create a *smart system* of your design.
- Listed the items in your Sunfounder box according to their classification as a `sensor` or `actuator` in Table below.
- In your integration exploration.md document, please be sure to describe the desired behavior of your system (e.g., when X1 sensor reaches X2 threshold, it will activate Y1 actuator to do Y2).

| Sensors| Actuators |
| ------- | -------- |
| Speed Module | Relay Module |
| Atmospheric Pressure Module | LED Traffic Light Module |
| Flame Module | TT Motor/Encoder Disk + L9110 Module (motor driver) |
| Soil Moisture Module | RGB LED Module |
| Raindrops Detection Module | I2C LCD 1602 |
| Touch Module | OLED Screen |
| MQ-2 Gas Module | 9G Servo |
| DS18B20 Module | Pump/Tube + + L9110 Module (motor driver) |
| Potentiometer Module | Passive Buzzer Module |
| Hall Switch Module | | 
| Photoresistor Module | |
| DHT11 Module | |
| Ultrasonic Module | |
| Water Level Module | |
| Rotary Encoder Module | |
| Laser Ranging Module | |
| Vibration Module | |
| MPU6050 Module | |
| Joystick Module | |
| DS1302 RTC Module | |
| PIR Motion Sensor Module | | 
| IR Obstacle Avoidance Module | |
| Heart Rate Module | | 
| Button Module | |

**Notes:**
- The combinations of sensors and actuators that are on the Sunfounder website are not allowed for this lab, including:
Ultrasonic sensor module and servo motor
    - Gas/smoke sensor module and Passive buzzer module
    - Gas/smoke sensor module and RGB LED module
    - Gas/smoke sensor module and Passive buzer module and RGB LED module
    - IR Obstacle avoidance sensor module and Pump/tube + L9110 Motor driver module
    - PIR Motion Module and 5V relay module 
    - PIR Motion module and RBG LED module 
    - PIR Motion Module and 5V relay module and RBG LED module
    - Heart rate monitor and OLED display module
    - Touch sensor module and traffic light module 
    - Potentiometer Module and I2C LCD 1602
    - Vibration sensor module and OLED Display module
    - I2C LCD 1602 and Pump/tube + motor driver + Capacitive soil moisture module + temperature and humidity sensor module
- If you not sure how to use sensors or actuatos please refer to [Sunfounder Website](https://docs.sunfounder.com/projects/esp32-starter-kit/en/latest/components/component_breadboard.html) -->

## Getting Started!
Once everything is prepared, start building your circuit!

### Connections
- Create your own connection
- **Warning:** Please double-check all connections are correct before plugging in (powering the motor) to avoid burns the circuit.
### Start writing your code
- Go to `src` folder
	- Please edit this file `main.cpp` or click [here](src/main.cpp) to complete the assignment.
	- **Note:** We did not provide you with a skeleton code in this lab; you have to modify it by yourself.
### Compile and upload
- Connect your ESP32 to your laptop/computer via USB.
- There are two ways in compile and upload your code:
	- Look at the **Blue Status Bar** at the very bottom of the VS Code window.
	    - `Checkmark` (✓): This is "Build" (Compile). Click it first to ensure there are no errors.
	    - `Right Arrow` (→): This is "Upload".
	    - Click the Right Arrow (→) to upload.
	- Sidebar
		- Click the `PlatformIO Icon` (Ant face).
		- Expand Project Tasks > Your Board Name (in this case will be `adafruit_feather_esp32_v2)` > General.
		- Click `Upload`
### Monitor the output
There are two ways to see the output:
- Blue Status Bar
	- Click the `Plug Icon`
- Sidebar
	- Click `Monitor`

**Note:** You can click `Upload and Monitor` as well.
After you click Monitor, you should see the print statements from your code, and your system working.

## Troubleshooting
- **No Power?** Ensure your USB cable is plugged in tight.
- **Motor hums but won't spin?** Check your connections.
- **Can't monitor output?**
	- Please check the baud rate in `platformio.ini`
        - `monitor_speed = 0` 
	- Please check to make sure there is only one .cpp file in the `src` folder.
	- Check which pins are in use: A0-A5 are analog pins, but only A0 and A1 can be used for output.
- **Can't upload your code to the esp32?**
    - double check for the correct files in the `src` folder.
    - Make sure your cable is connected and has data transfer capabilities.
