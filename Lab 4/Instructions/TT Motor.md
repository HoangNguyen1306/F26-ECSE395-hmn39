First, you will connect a TT motor. Unlike an LED that is just on or off, a requires a **Motor Driver** to allow direction control. Your goal is to initialize the motor pins and write a program that gradually increases and decreases the motor speed if possible.

## Checklist
To check that you have all the necessary components.
### Hardware
- ESP32 (Adafruit Feather V2)
- USB Cable (making sure that is not charging only)
- TT Motor
- Motor Driver Module
- Breadboard
- Jumper Wires
### Software
This step assumes you have VS Code and PlatformIO installed from previous labs.
- VS Code
- PlatformIO Extension

### Your Goal
- First Half
	- Modify to different value
		- `analogWrite`
		- `delay`
	- Swap the values
		- `analogWrtie`
	- Observe the behavior.
- Second Half
	- Run the motor:
		- Clockwise for **5s**
		- Stops for **2s**
		- Counterclockwise for **5s**
		- Stops for **2s**
		- Loops this sequence.
	- **Extra Credit:** If you can modify the code to continuously increase and decrease speed in a loop.

## Getting Started!
Once everything is prepared.

![TT Motor Connection](../photos/TT%20Motor%20Connection.png)
### Connections
- Motor Driver Module to TT Motor
	- Connect the two jumper wires from TT Motor into Motor B (Green Terminal Blocks).
		- Note: Order doesn't matter. If it doesn’t spin in the direction that you care for, you can just swap these wires later.
- Motor Driver Module to ESP32
	- VCC → VBUS (Please see the Adafruit ESP32 GPIO Pinout [here](https://github.com/adafruit/Adafruit-ESP32-Feather-V2-PCB/blob/main/Adafruit%20ESP32%20Feather%20V2%20Pinout.pdf))
		- Note:
			- This pulls 5V directly from your USB connections. The standard 3.3V pin may not strong enough for motors.
	- GND → GND
	- B-1A → XX (Define your own pin)
		- You can change into A-1A if you connect the driver to the motor in A.
	- B-1B → XX (Define your own pin)
		- You can change into A-1B if you connect the driver to the motor in A.
- **Warning:** Please double-check all connections are correct before plugging in (powering the motor) to avoid burns the circuit.
### Start writing your code
- Go to `src` folder
	- Please edit this file `TT Motor.cpp` or click [here](../src/TT%20Motor.cpp) to complete the first half of in-class task.
	- Please edit this file `TT Motor Rotate.cpp` or click [here](../src/TT%20Motor%20Rotate.cpp) to complete the second half of in-class task.
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
After you click Monitor, you should see the print statements from your code (e.g., "Clockwise", "Counterclockwise"), and your TT motor should begin spinning.
### Troubleshooting
- **No Power?** Ensure your USB cable is plugged in tight. The `VBUS` pin needs the USB connection to provide 5V to the motor.
- **Motor hums but won't spin?** Checking your connections.
- **Can't monitor output?**
	- Please check the baud rate in `platformio.ini` 
	- Please check in the `src` folder if there is more than one file or not.
	- Check the pins, `A2`, `A3`, and `A4` may cannot use it because they are input only.
- **Can't find actuator?** Please read the item lists in the Sunfounder box.
