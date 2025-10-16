#pragma once
#include "point.hpp"
#include "direction.hpp"
#include <iostream>

class Enemy {
    Point _position;
public:
    Enemy() = default;
    Enemy(const Point& pos) : _position(pos) {}
    Enemy(const Enemy& other) : _position(other._position) {}

    Enemy& operator=(const Enemy& other) {
        if (this != &other) _position = other._position;
        return *this;
    }

    Point GetPosition() const { return _position; }
    void Move(Direction dir);

    bool operator==(const Enemy& other) const { return _position == other._position; }
    bool operator!=(const Enemy& other) const { return !(*this == other); }

    friend std::ostream& operator<<(std::ostream& os, const Enemy& e) {
        return os << e._position;
    }
    friend std::istream& operator>>(std::istream& is, Enemy& e) {
        return is >> e._position;
    }
};
