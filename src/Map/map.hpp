/**
 * @file map.hpp
 * @brief Declarația clasei Map – harta jocului.
 * 
* Proiect: Pacman OOP  
 * Autor: Chiril Andreev  
 * An: 2025
 */

#pragma once
#include <vector>
#include <string>

/**
 * @class Map
 * @brief Reprezintă o hartă rectangulară a jocului.
 */
class Map {
    int width;                      ///< Lățimea hărții.
    int height;                     ///< Înălțimea hărții.
    std::vector<std::string> layout;///< Layout textual al hărții.

public:
    /**
     * @brief Constructorul clasei Map.
     * @param w Lățimea hărții.
     * @param h Înălțimea hărții.
     */
    Map(int w = 10, int h = 10);

    /**
     * @brief Generează layoutul hărții în mod procedural.
     */
    void Generate();

    /**
     * @brief Afișează harta la consolă.
     */
    void Display() const;
};
