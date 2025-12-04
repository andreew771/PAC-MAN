/**
 * @file obstacle.hpp
 * @brief Clasa Obstacle – obstacol static din joc.
 * 
  * Proiect: Pacman OOP  
 * Autor: Chiril Andreev  
 * An: 2025
 */

#pragma once
#include <string>
#include <iostream>

/**
 * @class Obstacle
 * @brief Reprezintă un obstacol care poate cauza daune jucătorului.
 */
class Obstacle {
private:
    int x;              ///< Coordonata X în hartă.
    int y;              ///< Coordonata Y în hartă.
    int damage;         ///< Daunele provocate jucătorului.
    std::string type;   ///< Tipul obstacolului.

public:
    /**
     * @brief Constructor complet.
     */
    Obstacle(int x, int y, int damage, const std::string& type);

    /// @return Coordonata X.
    int getX() const;

    /// @return Coordonata Y.
    int getY() const;

    /// @return Cantitatea de damage.
    int getDamage() const;

    /// @return Tipul obstacolului.
    std::string getType() const;

    /**
     * @brief Afișează detaliile obstacolului.
     */
    void print() const;
};
