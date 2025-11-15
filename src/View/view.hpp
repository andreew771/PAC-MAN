#pragma once
#include "abstract_painter.hpp"
#include <iostream>
#include <vector>
#include <string>

class View : public AbstractPainter {
public:
    void DrawImage(const Point& tl, const Point& br, const std::vector<std::string>& image) override;
    void WriteText(const Point& pos, const std::string& text) override;
    void Draw(const Point& pos, char symbol);
};
