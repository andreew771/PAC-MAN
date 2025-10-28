#pragma once
#include "point.hpp"
#include "direction.hpp"
#include <iostream>

class Player {
    Point _pos;
public:
    Player() = default;
    Player(const Point& p) : _pos(p) {}
    Player(const Player& other) = default;
    Player& operator=(const Player& other) = default;

    Point GetPosition() const { return _pos; }
    void SetPosition(const Point& p) { _pos = p; }

    void Move(Direction d){
        switch(d){
            case Direction::UP:    _pos.y--; break;
            case Direction::DOWN:  _pos.y++; break;
            case Direction::LEFT:  _pos.x--; break;
            case Direction::RIGHT: _pos.x++; break;
        }
    }

    bool operator==(const Player& o) const { return _pos == o._pos; }
    bool operator!=(const Player& o) const { return !(*this == o); }

    friend std::istream& operator>>(std::istream& in, Player& p);
    friend std::ostream& operator<<(std::ostream& out, const Player& p);
};
