# Smart Automatic Toilet Flushing System 🚽

## Project Overview

The Smart Automatic Toilet Flushing System is an Arduino-based embedded system designed to automate the toilet flushing process.

An ultrasonic sensor detects the presence and absence of a person, and a servo motor operates the flushing mechanism automatically.

## Objective

- Automate the toilet flushing process
- Improve hygiene
- Reduce unnecessary water usage
- Reduce manual operation
- Demonstrate sensor and actuator interfacing

## Components Required

- Arduino UNO
- HC-SR04 Ultrasonic Sensor
- Servo Motor
- Breadboard
- Jumper Wires
- USB Cable
- 5V Power Supply

## Circuit Connections

| Component | Pin | Arduino UNO |
|---|---|---|
| HC-SR04 | VCC | 5V |
| HC-SR04 | GND | GND |
| HC-SR04 | TRIG | D9 |
| HC-SR04 | ECHO | D10 |
| Servo Motor | Signal | D6 |
| Servo Motor | VCC | 5V |
| Servo Motor | GND | GND |

## Working Principle

1. The ultrasonic sensor continuously measures the distance.
2. When a person is detected, the Arduino identifies the presence.
3. After the person leaves, the Arduino detects the change in distance.
4. The Arduino sends a control signal to the servo motor.
5. The servo rotates to operate the flushing mechanism.
6. The servo returns to its initial position.

## Technologies Used

- Arduino UNO
- Embedded C/C++
- Ultrasonic Sensor
- Servo Motor
- Arduino IDE

## Project Files

- `Smart_Automatic_Toilet_Flushing.ino` - Arduino source code

## Future Scope

- Add Wi-Fi connectivity
- Monitor water consumption
- Add water-level sensing
- Mobile application monitoring
- Cloud-based data logging

## Author

### Gowthami

Electronics and Communication Engineering
