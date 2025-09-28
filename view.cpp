#include "view.hpp"
#include <iostream>

void View::Draw(Point pos, char symbol) {
    std::cout << symbol << " at (" << pos.x << "," << pos.y << ")\n";
}