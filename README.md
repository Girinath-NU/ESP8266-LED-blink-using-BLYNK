## Control LED Using Blynk 2.0 and ESP8266
This project demonstrates how to control an LED connected to an ESP8266 using the Blynk 2.0 IoT platform. The project allows remote control of the LED through a smartphone app.

## Features
Control an LED over Wi-Fi using Blynk 2.0.
Simple setup with ESP8266 and Blynk app.
Real-time control from anywhere.

## Components Required
ESP8266 (e.g., NodeMCU)
LED
220Ω resistor
Breadboard and jumper wires
Wi-Fi connection
Blynk app (available on Android and iOS)

## Prerequisites
Before starting, make sure you have:
A Blynk account (https://blynk.io/).
Blynk app installed on your smartphone.
A template and device created in the Blynk platform.
ESP8266 board added to Arduino IDE. (Instructions here)

## Circuit Diagram
Connect the LED to GPIO 2 (D4 pin on NodeMCU) of the ESP8266 board.
Use a 220Ω resistor between the LED and ground.

## Install required libraries:

Install the Blynk library by navigating to the Library Manager in Arduino IDE (Sketch > Include Library > Manage Libraries), and searching for Blynk.
Install the ESP8266WiFi library.
Set up your Blynk project:

Create a new project in the Blynk app.
Add a Button widget and link it to Virtual Pin V0.
Copy the Auth Token provided by Blynk and replace it in the code.
Modify the code:
Replace the following placeholders in the code with your details:

Wifi Username: Your Wi-Fi SSID (network name).
Wifi password: Your Wi-Fi password.
BLYNK_AUTH_TOKEN: The Auth Token generated from the Blynk app.
Upload the code to ESP8266:

