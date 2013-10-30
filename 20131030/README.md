# Exercises
## Object-Oriented Blinky
Read the code and try to understand what it does.

1. Start with Led1073.h, understand what you can do with LEDs
2. Look at oo_blinky.ino, understand how the selection of onboard vs external LED works
3. Look at LED1073.ino, see how the LED function is implemented.
4. Run the code and play with it
	* set the LED to be onboard LED
	* change the delay time to 100
	* set the LED to be external LED
	* what do you notice about the delay time after switch
	* set LED back to onboard
	* what do you notice about the delay time afte switch
	* why do you think this is? 

Ask questions about what you don't understand.
## Move LED to pin 4
1. Move the wire coming from the LED to the arduino to the arduino's digital pin 4 from digital pin 3.
2. Change the code so that everything works again.

## Flashing with count
* Extend oo_blinky to flash in fast/slow cycles, i.e.
	* add a slowDelay if flashCount is not 1
	* change oo_blinky to flash 5 times, instead of 1
	* if you feel brave, change oo_blinky so that a negative delay time is interpreted as an updated positive flashcount, i.e. if the user enters -5, the flashcount becomes 5.

# Graduation Time
Choose a new project for the rest of the preseason

**Option A:** Design your own Arduino project, build it, code it, debug it with the help of veterans and mentors. Some ideas:

* Put a speaker on a digital output and make it play a tune. See examples in Arduino's File->Examples menu.
* Put a potentiometer on the board as a digital input and use its value to control behavior of the code.
*  Use a light-sensitive resistor on an input and react to hands moving over it. For extra fun, make it an analog input and control music with it, e.g. tone frequency.

**Option B:** Talk to the software leads about working on a project on the real robot.

* Learn to operate the robot with joysticks and dashboard.
* Change something on the dashboard in Java
* Change button mappings on the robot control system
* Join a veteran student as they work on a pre-season project