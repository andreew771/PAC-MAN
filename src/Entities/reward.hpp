/**
 * @file reward.hpp
 * @brief Declarația clasei Reward – reprezintă un obiect colectabil din joc.
 * 
 * Proiect: Pacman OOP  
 * Autor: Chiril Andreev  
 * An: 2025
 */

#pragma once
#include <string>
#include <iostream>

/**
 * @class Reward
 * @brief Reprezintă un bonus colectabil din joc, care oferă puncte jucătorului.
 */
class Reward {
    std::string name;   ///< Numele obiectului (ex: Cherry, Apple etc.)
    int value;          ///< Valoarea în puncte oferită jucătorului.

public:
    /**
     * @brief Constructorul clasei Reward.
     * @param n Numele bonusului.
     * @param v Valoarea în puncte.
     */
    Reward(const std::string& n = "Cherry", int v = 10);

    /**
     * @brief Constructor de copiere.
     */
    Reward(const Reward& other);

    /**
     * @brief Operator de atribuire.
     */
    Reward& operator=(const Reward& other);

    /**
     * @brief Verifică egalitatea a două obiecte Reward.
     */
    bool operator==(const Reward& other) const;

    /**
     * @brief Returnează valoarea bonusului.
     */
    int GetValue() const;

    /**
     * @brief Returnează numele bonusului.
     */
    std::string GetName() const;

    /**
     * @brief Afișează Reward-ul în fluxul de ieșire.
     */
    friend std::ostream& operator<<(std::ostream& out, const Reward& r);
};
