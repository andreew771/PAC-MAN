#include <iostream>
#include "direction.hpp"

void testDirection() {
    Direction dir = Direction::UP;

    if (dir == Direction::UP) {
        std::cout << "UP\n";
    }
}