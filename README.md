Tsiabix ESP8266 - Automatic Plant Watering System

This project uses an Arduino-compatible board and a moisture sensor to automatically water plants when the soil is too dry. Designed as a low-cost, smart home automation solution.

---

## Features

- Detects soil moisture using analog sensor
- Controls water pump through a relay
- Fully autonomous operation
- Easy to calibrate with adjustable threshold
- Serial monitor output for debugging

---

## Hardware Used

- ESP8266 board
- Relay module
- Soil moisture sensor (analog)
- Water pump
- External power supply (for pump)
- Wires, breadboard

## How to Use

1. Connect the soil moisture sensor to the analog input pin (A0).  
2. Connect the relay module control pin to GPIO 13 (or update the code accordingly).  
3. Connect the water pump to the relay and provide it with external power.  
4. Upload the Arduino code to the ESP8266 board.  
5. Open the Serial Monitor at 9600 baud to observe sensor readings and pump status.  
6. Adjust the `THRESHOLD` value in the code to set the soil dryness level that triggers watering.

## Skills Learned

- Arduino programming and embedded C++
- Working with analog sensors (soil moisture sensor)
- Controlling actuators using relay modules
- Reading and interpreting analog sensor data
- Serial communication for debugging and monitoring
- Basic electronics and sensor threshold setting
- Structuring and organizing microcontroller code
- Debugging embedded systems with serial monitor