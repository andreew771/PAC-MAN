/**
 * @file direction.hpp
 * @brief Enumerație pentru direcțiile de deplasare în joc.
 * 
  * Proiect: Pacman OOP  
 * Autor: Chiril Andreev  
 * An: 2025
 */

#pragma once
#include <iostream>

/**
 * @enum Direction
 * @brief Direcțiile posibile ale mișcării jucătorului.
 */
enum class Direction { UP, DOWN, LEFT, RIGHT };

/**
 * @brief Scrie direcția într-un flux de ieșire.
 */
inline std::ostream& operator<<(std::ostream& out, const Direction& d) {
    switch(d){
        case Direction::UP: out << "UP"; break;
        case Direction::DOWN: out << "DOWN"; break;
        case Direction::LEFT: out << "LEFT"; break;
        case Direction::RIGHT: out << "RIGHT"; break;
    }
    return out;
}
