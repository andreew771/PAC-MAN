/**
 * @file enemy.hpp
 * @brief Declarația clasei Enemy care reprezintă un inamic în joc.
 */

#pragma once
#include <string>
#include <iostream>

/**
 * @class Enemy
 * @brief Reprezintă un inamic cu tip și nivel de pericol.
 */
class Enemy {
    std::string type;     ///< Tipul inamicului (ex: „Blinky”).
    int dangerLevel;      ///< Nivelul de pericol (dificultate).

public:
    /**
     * @brief Constructor cu parametri.
     * @param t Tipul inamicului.
     * @param lvl Nivelul de pericol.
     */
    Enemy(const std::string& t = "Ghost", int lvl = 1);

    /**
     * @brief Constructor de copiere.
     */
    Enemy(const Enemy& other);

    /**
     * @brief Operator de atribuire.
     */
    Enemy& operator=(const Enemy& other);

    /**
     * @brief Operator de comparație.
     */
    bool operator==(const Enemy& other) const;

    /**
     * @return Tipul inamicului.
     */
    std::string GetType() const;

    /**
     * @return Nivelul de pericol.
     */
    int GetDangerLevel() const;

    /**
     * @brief Operator pentru afișare.
     */
    friend std::ostream& operator<<(std::ostream& out, const Enemy& e);
};
