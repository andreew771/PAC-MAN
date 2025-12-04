/**
 * @file view.hpp
 * @brief Implementarea clasei View – responsabilă pentru afișarea elementelor grafice.
 * 
 * Proiect: Pacman OOP  
 * Autor: Chiril Andreev  
 * An: 2025
 */

#pragma once
#include "abstract_painter.hpp"
#include <iostream>
#include <vector>
#include <string>

/**
 * @class View
 * @brief Clasă concretă care implementează interfața AbstractPainter.
 * 
 * View este responsabilă de afișarea grafică a obiectelor din joc,
 * precum imaginile ASCII și textul. Aceasta poate fi extinsă sau
 * adaptată pentru un motor grafic real.
 */
class View : public AbstractPainter {
public:
    /**
     * @brief Desenează o imagine ASCII pe ecran între două puncte.
     * 
     * Imaginea este un vector de stringuri, fiecare string
     * reprezentând o linie a desenului.
     * 
     * @param tl Colțul stânga-sus al zonei de desenare.
     * @param br Colțul dreapta-jos al zonei de desenare.
     * @param image Vector de linii textuale reprezentând imaginea.
     */
    void DrawImage(const Point& tl, const Point& br,
                   const std::vector<std::string>& image) override;

    /**
     * @brief Afișează text la o anumită coordonată.
     * 
     * @param pos Poziția în care se scrie textul.
     * @param text Conținutul textual de afișat.
     */
    void WriteText(const Point& pos, const std::string& text) override;

    /**
     * @brief Desenează un singur caracter la poziția dată.
     * 
     * Este util pentru afișarea individuală a simbolurilor
     * precum jucătorul, inamicii sau pereții hărții.
     * 
     * @param pos Poziția în care se desenează simbolul.
     * @param symbol Caracterul afișat.
     */
    void Draw(const Point& pos, char symbol);
};
