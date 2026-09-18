# Arena-Simulation
This is an arena simulation where AI bots, 
created using a genetic algorithm, will fight, learn, and evolve to win. 
The project is built with **C++20**.

The simulation is built entirely from scratch. I am developing this project out of personal interest 
and a desire to practice C++ while gaining hands-on knowledge of how genetic algorithms and game engines work.

## Building and running

### Prerequisites
* **CMake** (version 3.15 or higher) — [Official Installation Guide](https://cmake.org)
* For Ubuntu/Debian users, you can install it via terminal:
  ```bash
  sudo apt update && sudo apt install cmake build-essential
  ```

### Run project
This project requires *CMake* (version 3.16+)
1. ***Configure the project***(creates the `build` directory and generates build files):
    ```bash
    cmake -B build
    ```
2. ***Build and Run*** the project using the custom target:
    ```bash
    cmake --build build --target run
    ```

### Automation
The `CMakeLists.txt` file is configured to automatically generate and copy the configuration file. Each time you build or run the project using the custom target:
```bash
cmake --build build --target run
```
The `compile_commands.json` file is automatically copied from the `build/` directory

