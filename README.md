# Traffic Light Simulation in C

## 🟢 Overview

This is a simple Traffic Light Simulation Program written in C.
It demonstrates the basic functioning of a traffic light system by sequentially displaying the lights — RED, YELLOW, and GREEN — with timed delays between each signal.

The project uses the Windows API Sleep() function to create pauses between transitions, providing a clear visual simulation directly in the terminal.

## Features

- Simulates any number of traffic light cycles as entered by the user.

- Allows users to continue or stop the simulation interactively.

- Uses delays to represent real-time light changes.

- Simple and beginner-friendly code structure.

## How It Works

1. The program greets the user and asks how many cycles to simulate.

2. Each cycle displays:

- RED light for 1 second
- YELLOW light for 1 second
- GREEN light for 1 second

3. After completing the entered number of cycles, the user is asked if they want to continue the simulation.

4. Typing:

- y → runs another simulation
- n → ends the program

## Example Output

```bash
Traffic Light Program Starting Now!
Enter -1 to quit:
how many traffic light cycles do you want to simulate? 3

RED
YELLOW
GREEN

RED
YELLOW
GREEN

RED
YELLOW
GREEN

Do you want to continue simulation? (y/n) y
how many traffic light cycles do you want to simulate? 2
```

## Requirements

- Operating System: Windows (because the code uses Sleep() from windows.h)
- Compiler: Any C compiler (e.g., GCC, MinGW, or MSVC)

## Compilation and Execution

### Using GCC (MinGW) on Windows

```bash
gcc traffic_light.c -o traffic_light.exe
traffic_light.exe
```

## Code Explanation

- #include <windows.h> – Provides the Sleep() function to create delays.

- #include <string.h> – Used for case-insensitive string comparison with \_stricmp().

- The while loop runs the simulation until the user enters -1 or chooses not to continue.

- Each traffic light phase is separated by a one-second delay.

## Future Improvements

- Add color-coded text output for each light (e.g., red, yellow, green).
- Make it cross-platform using standard timing libraries (unistd.h on Linux).
- Implement graphical output using a GUI library like SDL or OpenGL.

## ✍️ Author

**Bassey Rosemary Agala**
Electrical and Electronics Engineering Student | Embedded Systems & Robotics Enthusiast
