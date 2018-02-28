# User-Control LED
### My first Adruino Project- (Complete Beginner).

In this the user can control the following through the serial monitor :
* the number of cycles the LED blinks.
* the number of times the LED blinks in each cycle.
* each "blinking" time as well as each "not-blinking" time in each cycle.

## Requirements
* an arduino.
* an adruino IDE installed on the computer.
* an USB to connect the arduino to the computer.

## Description
### The code is made to work on the LED connected to pin 13 (Digital I/O pin) of the arduino.
If anybody desires to use an external LED then follow the following:
* connect the LED in series with a suitable resistor(usually 330ohms) on a bread-board.
* the power to the LED can be supplied from the arduino - 
connect the positive terminal of the LED to any Digital I/O pin on the arduino (except pin 0 and 1 which are TX and RX pins)
and the negative terminal to any one of GND(ground) pin on the arduino.
* Changes to be made in the code - change the value of x from 13 to whichever pin you have chosen.

## Additional feature that can be added
### the brightness of the LED in each blink can also be made user-dependent
* add an additional array variable in the code.
* ask the user to enter the brightness of each blink from the serial monitor and store it in the array added.
* use analogWrite instead of digitalWrite
* connect the positive terminal of the LED to an analog pin (~PWM) and change the value of x respectively.
