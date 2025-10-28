#include <iostream>
#include "point.hpp"

void testPoint() {
    Point p;
    p.x = 5;
    p.y = 10;

    std::cout << "Point coordinates: (" << p.x << ", " << p.y << ")\n";
}