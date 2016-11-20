## A few hardware preliminaries
How not to zap your pins, avoiding brownouts, electronics tips go here
 - Powering your project
 - Current considerations, large loads
 - Signal conditioning (?)

## Host software
IDE as a toolchain; APIs for serial coms; AVR libc with a Makefile
 - Using the Arduino CLI and your own editor
 - Writing custom library classes
 - Communicating externally

## Overview of MCU peripherals
Use Atmel ATMega328 as an example
 - Pinout
 - GPIO register groups and pin banks
 - Timers
 - ADCs
 - I2C and SPI (brief; pros/cons, applications)
 - U(S)ART

## Firmware
 - Coding outside loop()
 - When and how to avoid delay()
 - Integer math: choosing datatypes and keeping precision
 - Interrupts
 - timer configuration and gotchas
 - AVR-specific hacks: registers, datasheet, AVR libc definitions
 - Sleeping and WDT

## Modern 32-bit systems
 - Arduino and ESP8266
 - Teensyduino
