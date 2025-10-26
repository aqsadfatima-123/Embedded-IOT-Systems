Assignment 1 – Embedded IoT Systems

Name: Aqdas Fatima
Reg No: 23-NTU-CS-1017
Course: Embedded IoT Systems
Instructor: Sir Nasir Mehmood
Date: 26-Oct-2025

Overview

This assignment contains two ESP32-based projects developed and tested on the Wokwi Simulator.
Both projects demonstrate hardware interfacing, sensor input handling, and OLED-based visual feedback.

Task 1 – Device Control using ESP32 (LEDs, Buttons, Buzzer & OLED)

Description:
The ESP32 controls three LEDs, two buttons, and a buzzer with real-time visual messages displayed on an OLED.
Buttons toggle the LEDs and buzzer states, and the OLED updates accordingly.

Components Used:

ESP32 DevKitC V4

OLED 128x64 (I2C)

LEDs × 3

Buzzer × 1

Push Buttons × 2

420? Resistors × 3

Jumper Wires

Pin Map:

Component	Pin Name	GPIO No.
LED 1	D2	GPIO 2
LED 2	D4	GPIO 4
LED 3	D5	GPIO 5
Button 1	D26	GPIO 26
Button 2	D27	GPIO 27
Buzzer	D15	GPIO 15
OLED SDA	SDA	GPIO 21
OLED SCL	SCL	GPIO 22

Wokwi Project Link:
?? View Simulation on Wokwi
https://wokwi.com/projects/445801075490100225

Screenshots:
![Task 1 Output](D:\Embedded IOT 5th B\Assignment_1_23-NTU-CS-1017\TASK_1\build ss.png)
![Task 1 Wokwi](D:\Embedded IOT 5th B\Assignment_1_23-NTU-CS-1017\TASK_1\WOKWI SS.png)
![Task 1 Hardware]:D:\Embedded IOT 5th B\Assignment_1_23-NTU-CS-1017\TASK_1\Bread board.jpg

Task 2 – Button Press Duration Detection (Short / Long Press with OLED)

Description:
This task detects short and long button presses using the ESP32.
A short press toggles the LED, while a long press activates the buzzer. The OLED displays corresponding feedback.

Components Used:

ESP32 DevKitC V4

OLED 128x64 (I2C)

Push Button × 1

LED × 1

Buzzer × 1

Resistor × 1

Pin Map:

Component	Pin Name	GPIO No.
LED	D5	GPIO 5
Button	D25	GPIO 25
Buzzer	D18	GPIO 18
OLED SDA	SDA	GPIO 21
OLED SCL	SCL	GPIO 22

Wokwi Project Link:
?? View Simulation on Wokwi
https://wokwi.com/projects/445802214103270401

Screenshots:
![Task 2 Output](D:\Embedded IOT 5th B\Assignment_1_23-NTU-CS-1017\TASK_2\Build ss.png)
![Task 2 Wokwi](D:\Embedded IOT 5th B\Assignment_1_23-NTU-CS-1017\TASK_2\WOKWI SS.png)
![Task 2 Hardware]:D:\Embedded IOT 5th B\Assignment_1_23-NTU-CS-1017\TASK_2\Breadboard.jpg