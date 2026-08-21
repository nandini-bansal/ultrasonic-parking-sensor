# Ultrasonic Parking Sensor

A simple parking assist system that uses an ultrasonic sensor to measure distance and 
signals proximity through three color-coded LEDs.

## How it works
- The ultrasonic sensor continuously measures the distance to the nearest object.
- Based on that distance, one of three LEDs lights up:
  - 🔵 **Blue** — object is far away (safe distance)
  - 🟡 **Yellow** — object is at medium range (slow down)
  - 🔴 **Red** — object is very close (stop)

## Components used
- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- 3x LEDs (Blue, Yellow, Red)
- Resistors, breadboard, jumper wires

## Circuit
<img width="1000" height="300" alt="image" src="https://github.com/user-attachments/assets/bd037772-b0d9-40ad-a7f5-ad37c042148b" />


## Code
See `parking_sensor.ino` for the full sketch. 

