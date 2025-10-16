#include "direction.hpp"

std::ostream& operator<<(std::ostream& out, const Direction& direction) {
    switch (direction) {
        case Direction::UP:    out << "UP"; break;
        case Direction::DOWN:  out << "DOWN"; break;
        case Direction::LEFT:  out << "LEFT"; break;
        case Direction::RIGHT: out << "RIGHT"; break;
    }
    return out;
}
