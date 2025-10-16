#pragma once
#include "point.hpp"
#include "direction.hpp"
#include <iostream>

class Player {
    Point _position;
public:
    Player() = default;
    Player(const Point& pos) : _position(pos) {}
    Player(const Player& other) : _position(other._position) {}

    Player& operator=(const Player& other) {
        if (this != &other) _position = other._position;
        return *this;
    }

    Point GetPosition() const { return _position; }
    void Move(Direction dir);

    bool operator==(const Player& other) const { return _position == other._position; }
    bool operator!=(const Player& other) const { return !(*this == other); }

    friend std::ostream& operator<<(std::ostream& os, const Player& p) { return os << p._position; }
    friend std::istream& operator>>(std::istream& is, Player& p) { return is >> p._position; }
};
