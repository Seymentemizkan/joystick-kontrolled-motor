# Joystick Motor Control

A simple Arduino project that controls a DC motor using a joystick module. The project reads analog values from a joystick and translates them into motor direction and speed.

## Hardware Requirements

- Arduino board (e.g., Arduino Uno, Nano)
- Joystick module
- DC motor
- Motor driver (compatible with IN1/IN2 control)
- Jumper wires
- Power supply for the motor (as needed)

## Circuit Connections

1. Connect joystick X-axis to Arduino analog pin A2
2. Connect joystick Y-axis to Arduino analog pin A1
3. Connect motor driver input 1 to Arduino digital pin 3 (PWM)
4. Connect motor driver input 2 to Arduino digital pin 5 (PWM)
5. Connect joystick power and ground to Arduino 5V and GND
6. Connect motor driver power according to motor specifications

## How It Works

This project uses a joystick to control both the speed and direction of a DC motor:

- The X-axis of the joystick determines the direction
- The Y-axis controls the speed of the motor
- When X value is less than 120, the motor rotates in one direction
- When X value is greater than or equal to 120, the motor rotates in the opposite direction
- The Y value determines the speed of rotation

## Installation

1. Clone this repository.
   
3. Open the `.ino` file with the Arduino IDE

4. Upload the sketch to your Arduino board

## Usage

After uploading the code to your Arduino:

1. Power on your circuit
2. Move the joystick:
- Up/down to increase/decrease motor speed
- Left/right to change motor direction

## Contributing

Contributions are welcome! Please feel free to submit a Pull Request.
