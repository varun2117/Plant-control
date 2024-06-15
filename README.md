# Plant-control
This is a simple plant control project created by me using Arduino.

![image](https://github.com/varun2117/Plant-control/assets/73285976/90855b73-93de-4e7e-a241-d0e3764b6b1b)

## Materials Required:
- Arduino Uno - 1
- Arduino IDE
- Resistors (1k ohm) - 5
- Force sensor - 3
- Temperature Sensor (TMP36) - 1
- LED - 2
- Piezo Buzzer - 1
- Quad AND Gate (IC 7408) - 1
- Quad NAND Gate (IC 7408) - 1
- Wires - as required

**Note:** You can also simulate this project if you don't have an Arduino. It is recommended to simulate the circuit first before working with hardware.

## Simulation:
You can view and edit my simulation on Tinkercad using the following link:

[My Simulation on Tinkercad](https://www.tinkercad.com/things/hoy1210BSuH-terrific-bojo/editel?sharecode=zCr7S3-S4A6NgmSH8WA0hHgQXbCIXmApYzA1RcWjdIE)

## Truth Table:
The basic truth table of this project is very simple:

Pressure(P):

| e | d | c | output |
|---|---|---|--------|
| 0 | 0 | 0 | 0      |
| 0 | 0 | 1 | 1      |
| 0 | 1 | 0 | 0      |
| 0 | 1 | 1 | 1      |
| 1 | 0 | 0 | 0      |
| 1 | 0 | 1 | 1      |
| 1 | 1 | 0 | 0      |
| 1 | 1 | 1 | 0      |

so by using Kmap we get P=CD̅+CE̅

For T: -

| e | d | output |
|---|---|--------|
| 0 | 0 | 0      |
| 0 | 0 | 0      |
| 1 | 1 | 1      |
| 1 | 1 | 1      |




By using K-Map, we get the expression of T as
T=A

The Final output looks like 

 **CASE 1**
 
![image](https://github.com/varun2117/Plant-control/assets/73285976/da5afdcd-05bc-45d1-b2e8-2426eac4c618)


 **CASE 2**

![image](https://github.com/varun2117/Plant-control/assets/73285976/31940d57-c8a4-498d-8d34-d38106e83f0c)


## Project Description:
This project involves using an Arduino to monitor and control various environmental conditions for a plant. It utilizes force sensors to measure soil pressure and a temperature sensor (TMP36) to monitor the temperature. Depending on the sensor readings, the Arduino will activate LEDs, a piezo buzzer, and logic gates (AND and NAND gates) to provide visual and auditory feedback.

The project can be simulated in Tinkercad before building the actual hardware, which helps in understanding the circuit and debugging any issues beforehand.

## Conclusion:
This plant control project demonstrates a simple yet effective way to use sensors and logic gates with an Arduino for environmental monitoring and control. By simulating the circuit first, you can ensure the system works as intended before moving on to the hardware implementation.

---



