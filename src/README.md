# C++ Lab04: Modernized Game Implementation with STL and Smart Pointers

## Overview
This laboratory work focuses on modern C++ practices for implementing a simple game simulation. The previous lab code has been updated to utilize the Standard Template Library (STL), smart pointers, and modern C++ features to improve code safety, readability, and maintainability.

## Objectives
- Replace traditional arrays with STL containers such as `vector` and `map`.
- Use `std::string` instead of character arrays for text handling.
- Replace raw pointers and dynamic memory allocation with smart pointers (`std::unique_ptr` and `std::shared_ptr`) and references.
- Apply STL algorithms for searching, sorting, comparing, and copying elements.
- Use input/output streams (`std::cin` and `std::cout`) for data handling.
- Structure the project using multiple files and classes for clarity.

## Project Structure
The project is organized into multiple files and classes:

- **Classes**
  - `Player` – represents the player character and its attributes.
  - `Enemy` – represents an enemy character in the game.
  - `Reward` – represents collectible items or rewards.

- **Files**
  - `Player.h` / `Player.cpp` – defines and implements the Player class.
  - `Enemy.h` / `Enemy.cpp` – defines and implements the Enemy class.
  - `Reward.h` / `Reward.cpp` – defines and implements the Reward class.
  - `main.cpp` – contains the main function and integrates the classes.

## Features
- Modern C++ coding practices using STL and smart pointers.
- Console-based interaction using input/output streams.
- Efficient data handling with STL containers (`vector`, `map`).
- Algorithms for sorting, searching, comparing, and copying elements.
- Object-oriented design with clear separation of responsibilities.

