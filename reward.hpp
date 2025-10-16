#pragma once
#include "point.hpp"
#include <iostream>

class Reward {
    Point _position;
public:
    Reward() : _position(3,3) {}
    Reward(const Point& pos) : _position(pos) {}
    Reward(const Reward& other) : _position(other._position) {}

    Reward& operator=(const Reward& other) {
        if (this != &other) _position = other._position;
        return *this;
    }

    Point GetPosition() const { return _position; }

    bool operator==(const Reward& other) const { return _position == other._position; }
    bool operator!=(const Reward& other) const { return !(*this == other); }

    friend std::ostream& operator<<(std::ostream& os, const Reward& r) { return os << r._position; }
    friend std::istream& operator>>(std::istream& is, Reward& r) { return is >> r._position; }
};
