## Description

This project implements a Pac-Man game in C++ as part of Lab 2. The task builds upon previous lab assignments and is developed in the `lab02` branch of the repository. The project includes multiple source files (`*.cpp`) and header files (`*.h`) that define structures and classes for the game logic, along with a `Makefile` for manual compilation and building of the project.

## Requirements

- **Compiler**: MinGW (with `g++` for C++ compilation).
- **Operating System**: Windows (tested in the command line).
- **Tools**: `mingw32-make` for managing the build process.
- **Dependencies**: None (the project uses only the C++ standard library).

## Project Structure

The project contains the following main files:

- **Source Files**:
  - `main.cpp`: Contains the `main` function, the entry point of the game.
  - `direction.cpp`: Implements logic for entity movement directions.
  - `enemy.cpp`: Defines enemy behavior.
  - `engine.cpp`: Manages the core game logic (game engine).
  - `map.cpp`: Implements the game map.
  - `player.cpp`: Defines the player's (Pac-Man) behavior.
  - `point.cpp`: Manages points/coordinates in the game.
  - `reward.cpp`: Implements rewards (e.g., points or power-ups).
  - `view.cpp`: Handles game rendering or display.

- **Header Files**:
  - `*.h`: Corresponding header files for each `.cpp` file (e.g., `direction.h`, `enemy.h`, etc.) containing class and structure declarations.

- **Makefile**:
  - `Makefile`: Automates the compilation and building of the `PacmanGame.exe` executable.
