Next, you will connect a Servo Motor. Servos are different because they don't just spin; they go to a specific location. You will learn how to map your code inputs to specific **angles** (0° to 180°) to create precise movements.

## Checklist
To check that you have all the necessary components.
### Hardware
- ESP32 (Adafruit Feather V2)
- USB Cable (making sure that is not charging only)
- Servo Motor
- Breadboard
- Jumper Wires
### Software
This step assumes you have VS Code and PlatformIO installed from previous labs.
- VS Code
- PlatformIO Extension

### Your Goal
- First Half
	- Modify all of the following **one at a time**:
		- `minPulseWidth`
		- `maxPulseWidth`
		- `setPeriodHertz`
		- `Rotation range`
		- `delay`
	- Observe the behavior.
- Second Half
	- Instead of moving linearly, modify the code so the servo moves to random angles between 0° and 180° with different delays.
	- **Extra Credit:** Modify the code to gradually accelerate and decelerate the servo motion rather than moving at a constant speed.

## Getting Started!
Once everything is prepared.

![Servo Motor Connection](../photos/Servo%20Motor%20Connection.png)
### Connections
- Servo Motor to ESP32
    - Red Wire (Power) → VBUS (Please see the Adafruit ESP32 GPIO Pinout [here](https://github.com/adafruit/Adafruit-ESP32-Feather-V2-PCB/blob/main/Adafruit%20ESP32%20Feather%20V2%20Pinout.pdf))
            - Note: This pulls 5V directly from your USB connections. The standard 3.3V pin may not strong enough for motors.
    - Brown Wire (GND) → GND
    - Orange Wire (Signal) → Your desired pin
### Start writing your code
- Go to `src` folder
    - Click `Servo Motor.cpp` or click [here](../src/Servo%20Motor.cpp) to complete the first half of post-class task.
	- Click `Servo Motor Random.cpp` or click [here](../src/Servo%20Motor%20Random.cpp) to complete the second half of post-class task.
- In this assignment, `Servo Library` is required.
	- Install the Servo Library
		- Go to `platformio.ini` file
			- Please check that this line `lib_deps = madhephaestus/ESP32Servo@^3.1.3` exists or not. If not, please add it.
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
After you click Monitor, you should see the print statements from your code (e.g., "Angle: 45"), and your servo motor should begin moving.
### Troubleshooting
- **No Power?** Ensure your USB cable is plugged in tight. The `VBUS` pin needs the USB connection to provide 5V to the motor.
- **No such file or directory** You didn't install the `ESP32Servo` library in PlatformIO.
- **Can't monitor output?**
	- Please check the baud rate in `platformio.ini` 
	- Please check in the `src` folder if there is more than one file or not.
	- Check the pins, `A2`, `A3`, and `A4` may cannot use it because they are input only.
- **Can't find actuator?** Please read the item lists in the Sunfounder box.