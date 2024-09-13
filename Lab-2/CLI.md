## ENSE 452 - Embedded and Real-Time Software Systems - Laboratory

# Lab 2: Command Line Interface

### University of Regina
### Faculty of Engineering and Applied Science - Software Systems Engineering

### Lab Instructor: [Trevor Douglas](mailto:trevor.douglas@uregina.ca)

## Objective

The objective here is to set up a Command-Line Interface (CLI) through which
you can communicate with your target board.  Such a tool is extremely
useful for unit testing your code, and for automating scripted
unit tests.

First you will be enabling an onboard USART and
establishing simple polled serial communication with a terminal
program (e.g. Putty, or TeraTerm) running on the host machine.

Next, you will design a set of commands and responses such that you
can type the commands at your CLI prompt, and expect to see various
behaviours on the target board as well as textual responses inside the
CLI.  One useful exercise will incorporate LED control into your CLI.

At each step of the development, we will be paying attention to good
software design principles.

