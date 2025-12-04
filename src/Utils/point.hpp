/**
 * @file point.hpp
 * @brief Structură simplă pentru a reprezenta coordonate 2D.
 */

#pragma once
#include <iostream>

/**
 * @struct Point
 * @brief Reprezintă un punct cu coordonate X și Y.
 * 
 * Proiect: Pacman OOP  
 * Autor: Chiril Andreev  
 * An: 2025
 */
struct Point {
    int x; ///< Coordonata X.
    int y; ///< Coordonata Y.

    Point(int _x = 0, int _y = 0);
    Point(const Point& o) = default;
    Point& operator=(const Point& o) = default;

    bool operator==(const Point& o) const;
    bool operator!=(const Point& o) const;
};

/**
 * @brief Citește un punct din flux.
 */
inline std::istream& operator>>(std::istream& in, Point& p) { return in >> p.x >> p.y; }

/**
 * @brief Scrie un punct în flux.
 */
inline std::ostream& operator<<(std::ostream& out, const Point& p) { return out << p.x << ' ' << p.y; }
