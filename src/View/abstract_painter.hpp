/**
 * @file abstract_painter.hpp
 * @brief Interfață grafică pentru desenarea elementelor jocului.
 */

#pragma once

#include "point.hpp"
#include <string>
#include <vector>

/**
 * @struct AbstractPainter
 * @brief Interfață abstractă pentru clase de randare grafică.
 */
struct AbstractPainter {

    /**
     * @brief Desenează o imagine textuală pe ecran.
     * @param topLeft Colțul din stânga sus.
     * @param bottomRight Colțul din dreapta jos.
     * @param image Reprezentarea imaginii ca vector de stringuri.
     */
    virtual void DrawImage(const Point& topLeft, const Point& bottomRight,
                           const std::vector<std::string>& image) = 0;

    /**
     * @brief Scrie text la o poziție dată.
     * @param pos Poziția pe ecran.
     * @param text Textul afișat.
     */
    virtual void WriteText(const Point& pos, const std::string& text) = 0;

    virtual ~AbstractPainter() = default;
};
