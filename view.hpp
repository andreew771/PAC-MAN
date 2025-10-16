#pragma once
#include "abstract_painter.hpp"
#include <iostream>

class View : public AbstractPainter {
public:
    void DrawImage(Point topLeft, Point bottomRight, char** image) override {
        std::cout << "Drawing image from " << topLeft << " to " << bottomRight << "\n";
    }

    void WriteText(Point position, char* text) override {
        std::cout << "Writing text at " << position << ": " << text << "\n";
    }

    void Draw(Point pos, char symbol) {
        std::cout << symbol << " at " << pos << "\n";
    }
};
