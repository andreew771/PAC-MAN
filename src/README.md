# PAC-MAN – 2D GAME PROJECT

## 📌 Project Description
This project is a simplified implementation of the **Pac-Man** game, developed in C++ as part of the OOP laboratory exercises (lab01–lab06).  
The purpose of the application is to simulate the main elements of the game:

- the player (Pac-Man)
- enemies (ghosts)
- rewards (fruits)
- obstacles / map elements
- the game engine (Engine)
- a simple display system (View)
- score saving (Scoreboard)

The project is modularized using **static libraries**, and the code documentation is generated with **Doxygen**.

---

## 🎮 Game Rules
The lab version of the game follows the classic logic in a simplified form:

1. **Pac-Man collects rewards** (Reward), increasing the score.
2. **Enemies (Enemy)** have a danger level. In the current version, collisions are not implemented, but their data is managed.
3. **The map (Map)** is automatically generated as a fixed-size ASCII matrix.
4. **Engine** manages all components:
   - generates the map
   - initializes the player, enemies, and rewards
   - displays the final game state
5. The **Scoreboard** system allows saving the score to a file.

---

## 🔧 Dependencies and Development Environment

### ✔ Language and Compiler
- **C++17**
- **MinGW-w64 (recommended g++ 15.x)** or **Linux g++ 11+**
- Alternatively: **MSYS2 + make**

### ✔ External Libraries Used
The project includes:

- **Doxygen** – for generating documentation (optional)
- Optionally, a graphics library like **SDL2** (in lab05 the project uses console-view only)

### ✔ Recommended Tools
- **Visual Studio Code** or CLion
- **MSYS2 terminal** for using the Makefile
- **Git + GitHub** for version control

---

## 🧱 How to Build the Application

### 🔨 1. Compiling the Application
The project uses a Makefile to automate compilation. Steps:

1. Open a terminal in the project directory.
2. Run the command:

```bash
make
