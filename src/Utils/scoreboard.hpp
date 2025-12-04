/**
 * @file scoreboard.hpp
 * @brief Sistem simplu de salvare a scorurilor.
 *  
 * Proiect: Pacman OOP  
 * Autor: Chiril Andreev  
 * An: 2025
 */

#pragma once
#include <fstream>
#include <string>

/**
 * @class Scoreboard
 * @brief Clasă utilitară pentru salvarea scorurilor în fișier.
 */
class Scoreboard {
public:
    /**
     * @brief Salvează numele și scorul jucătorului într-un fișier.
     * @param player Numele jucătorului.
     * @param score Scorul obținut.
     */
    static void Save(const std::string& player, int score);
};
