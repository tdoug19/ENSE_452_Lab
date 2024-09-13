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


## Procedure

### Project Setup
- Create a new Lab2 subdirectory inside your repository on your local machine.
- Start the STM32CubeIDE software and create a new STM32 project
- Search and Select our Nucleo-64 board.
- Initiate all peripherals with their default mode.
- Use the graphical tool to enable USART2.  This is the USB connection between the board and the host.  Notice in the schematic that this USART2 connects to the PC through the ST-Link.  This allows us communication between the board and PC.
- Save the project and generate all the setup code.


### Phase 1: Get the Serial Port Working
There are a number of ways to communicate with the board via the serial link.  The first way we will investigate is polling mode.  Investigate the following two HAL functions found in 39.2.1 of the HAL document under Polling mode IO operation:

<details>



```C
   HAL_USART_Transmit()
   HAL_USART_Receive()

```
</details>