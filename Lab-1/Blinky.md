## ENSE 452 - Embedded and Real-Time Software Systems - Laboratory

# Lab 1: Introduction to the hardware and software tools

### University of Regina
### Faculty of Engineering and Applied Science - Software Systems Engineering

### Lab Instructor: [Trevor Douglas](mailto:trevor.douglas@uregina.ca)

## Background

Many documents are available on urcourses, under Class Resources in the ARM STMicro Docs folder.  Some of the most useful are listed below. There may be updated versions of these documents available online, which you are welcome to substitute.

- STM32CubeIDEUserManual: UM2609
-  STM32 Programmer's Manual: PM0056
-  STM32 Reference Manual: RM0008
-  Nucleo Board Schematic: MB1136
-  STM32 HAL User Manual: UM1850
-  STM32F103RB Data Sheet

Our target board is the Nucleo-64, and it has a lot of fun peripherals. The brain of this board is a STMicro STM32F103RB microcontroller, with 128 KiB of Flash, and 20 KiB of RAM and a 72MHz clock.

### Equipment and Software Requirements}

- PC for development.
- STM32CubeIDE Software (I am using Windows).
- Nucleo-64 development kit and USB Serial cable.
- Git (Git client or use command line).


## Objective

The objective of this lab is to get you started using the STM32CubeIDE and program the Nucleo-64 board to understand how to develop software for this target. You will also put your project under source control (revision control). First you'll get the LED on the board to blink at a certain rate. As you build your code make sure to commit changes and push to your repository as that is where your code will be evaluated.


## Procedure

### Phase 1
Blinky!  (The hello world of embedded)

- Demonstration !!
- Also create an account on your favorite GIT hosting site (bitbucket or github).  For instance you may name your repository enel452YourName''.  Make sure this repo is private and that you allow the professor, myself and TA's access.
- Clone your repository and make a Lab1 subdirectory.
- Start the STM32CubeIDE software and create a new STM32 project.
- Search and Select our Nucleo-64 board.
- Initiate all peripherals with their default mode.
- Use the graphical tool to ensure that PA5 is configured to connect to the Green LED on the board.
- Save the project and generate all the setup code.
- Look at the HAL documentation (20.2.4) to toggle this light and delay (6.1.3) for 1 second.  Make use of the HAL_Delay function.
- Make sure you check in your code and then push to your remote repository.  Use appropriate commit messages.
