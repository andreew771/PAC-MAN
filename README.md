# README - Lab 2: Pac-Man Game

## Description

This project implements a Pac-Man game in C++ as part of Lab 2. The task builds upon previous lab assignments and is developed in the `lab02` branch of the repository. The project includes multiple source files (`*.cpp`) that define structures and classes for the game logic, along with a `Makefile` for manual compilation and building of the project.

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

## Project Build Method

The project can be built either manually by compiling individual source files or automatically using the provided `Makefile`. Below are the steps for both approaches:

### Manual Compilation
To compile a single source file into an object file, use the `g++` compiler with the `-c` flag. For example, to compile `direction.cpp` into `direction.o`, run the following command in the command line from the project directory (e.g., `C:\Users\chiri\PAC-MAN`):

```bash
g++ -c direction.cpp -o direction.o
```

Repeat this process for each source file (`main.cpp`, `enemy.cpp`, `engine.cpp`, `map.cpp`, `player.cpp`, `point.cpp`, `reward.cpp`, `view.cpp`) to generate their respective object files (`.o`).

To link all object files into the final executable `PacmanGame.exe`, run:

```bash
g++ -o PacmanGame.exe direction.o enemy.o engine.o main.o map.o player.o point.o reward.o view.o
```

This command combines the object files into a single executable.

### Automated Build with Makefile
The provided `Makefile` automates the compilation and linking process. The `Makefile` defines rules to:
- Compile each source file into an object file (e.g., `direction.cpp` to `direction.o`).
- Link all object files to create the `PacmanGame.exe` executable.
- Clean up generated files (object files and executables).

To build the project using the `Makefile`:

1. Open the command line in the project directory.
2. Run the following command:
   ```bash
   mingw32-make
   ```
   This will:
   - Compile all `.cpp` files into `.o` files using `g++ -c`.
   - Link the object files into `PacmanGame.exe` using `g++ -o`.

3. To clean up generated files (e.g., remove `.o` and `.exe` files), run:
   ```bash
   mingw32-make clean
   ```

The `Makefile` used is structured as follows:
```makefile
all: PacmanGame.exe

PacmanGame.exe: direction.o enemy.o engine.o main.o map.o player.o point.o reward.o view.o
	g++ -o PacmanGame.exe direction.o enemy.o engine.o main.o map.o player.o point.o reward.o view.o

direction.o: direction.cpp
	g++ -c direction.cpp -o direction.o

enemy.o: enemy.cpp
	g++ -c enemy.cpp -o enemy.o

engine.o: engine.cpp
	g++ -c engine.cpp -o engine.o

main.o: main.cpp
	g++ -c main.cpp -o main.o

map.o: map.cpp
	g++ -c map.cpp -o map.o

player.o: player.cpp
	g++ -c player.cpp -o player.o

point.o: point.cpp
	g++ -c point.cpp -o point.o

reward.o: reward.cpp
	g++ -c reward.cpp -o reward.o

view.o: view.cpp
	g++ -c view.cpp -o view.o

clean:
	rm -f *.o *.exe
```

### Running the Game
After a successful build, run the generated executable:
```bash
PacmanGame.exe
```
