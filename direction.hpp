#pragma once
#include <iostream>

enum class Direction { UP, DOWN, LEFT, RIGHT };

inline std::ostream& operator<<(std::ostream& out, const Direction& d) {
    switch(d){
        case Direction::UP: out << "UP"; break;
        case Direction::DOWN: out << "DOWN"; break;
        case Direction::LEFT: out << "LEFT"; break;
        case Direction::RIGHT: out << "RIGHT"; break;
    }
    return out;
}
