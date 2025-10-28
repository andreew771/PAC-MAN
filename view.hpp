#pragma once
#include "abstract_painter.hpp"
#include <iostream>

class View : public AbstractPainter {
public:
    void DrawImage(const Point& tl, const Point& br,
                   const std::vector<std::string>& image) override {
        std::cout << "Image from " << tl << " to " << br << '\n';
        for (auto &row : image) std::cout << row << '\n';
    }
    void WriteText(const Point& pos, const std::string& text) override {
        std::cout << "Text at " << pos << ": " << text << '\n';
    }
    void Draw(const Point& pos, char symbol) { std::cout << symbol << " at " << pos << '\n'; }
};
