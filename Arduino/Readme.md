# Arduino Part

This folder contains the Arduino part of the project.

## Serial Protocol

### Description

The serial protocol define the compositions of the exchanged frames between the PC and the Arduino.
It is composed of 4 parts :
- The command code (1 byte)
- The length of the data (1 byte)
- The data (255 bytes max)
- The delimiter (\n)

For some commands, pin numbers are required in the data part. Those pin numbers are coded on 8 bits and range from 0 (0x00) to 127 (0x7F)
The MSB of the pin number byte is used to identify whether it is a digital pin (0) or an analog pin (1).
For example :
- 52 (digital) is coded 0x35
- A5 (analog) is coded 0x84
- A15 (analog) is coded 0x8F

### Commands list

#### From PC to Arduino

##### Pin Mode

Changes the pin mode of a given pin number (OUTPUT, INPUT, INPUT_PULLUP)
- Command : 0x01
- Data length : 2 bytes
- Data :
    - pin : 1 byte
    - pin mode : 1 byte :
        - OUTPUT : 0x00
        - INPUT : 0x01
        - INPUT_PULLUP : 0x02

##### Write

Makes a digital or an analog write (PWM) a value on a given pin number
- Command : 0x02
- Data length : 2 bytes
- Data :
    - pin : 1 byte
    - mode : 1 byte :
        - DigitalWrite : 0x00
        - Analog Write : 0x01

