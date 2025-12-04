/**
 * @file player.hpp
 * @brief Declarația clasei Player care reprezintă jucătorul din joc.
 */

#pragma once
#include <string>
#include <iostream>

/**
 * @class Player
 * @brief Reprezintă jucătorul controlat de utilizator.
 */
class Player {
    std::string name;   ///< Numele jucătorului.
    int score;          ///< Scorul acumulat.

public:
    /**
     * @brief Constructor cu parametri.
     * @param n Numele jucătorului.
     * @param s Scorul inițial.
     */
    Player(const std::string& n = "Pacman", int s = 0);

    /**
     * @brief Constructor de copiere.
     */
    Player(const Player& other);

    /**
     * @brief Operator de atribuire.
     */
    Player& operator=(const Player& other);

    /**
     * @brief Operator de comparație.
     */
    bool operator==(const Player& other) const;

    /**
     * @brief Adaugă puncte la scor.
     * @param value Număr de puncte.
     */
    void AddScore(int value);

    /**
     * @return Scorul curent.
     */
    int GetScore() const;

    /**
     * @return Numele jucătorului.
     */
    std::string GetName() const;

    /**
     * @brief Citește datele jucătorului din flux.
     */
    friend std::istream& operator>>(std::istream& in, Player& p);

    /**
     * @brief Afișează jucătorul în flux.
     */
    friend std::ostream& operator<<(std::ostream& out, const Player& p);
};
