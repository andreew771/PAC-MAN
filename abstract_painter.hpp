#pragma once
#include "point.hpp"
#include <string>
#include <vector>

struct AbstractPainter {
    virtual void DrawImage(const Point& topLeft, const Point& bottomRight,
                           const std::vector<std::string>& image) = 0;
    virtual void WriteText(const Point& pos, const std::string& text) = 0;
    virtual ~AbstractPainter() = default;
};
