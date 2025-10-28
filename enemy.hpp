#pragma once
#include "point.hpp"
#include "direction.hpp"
#include <iostream>

class Enemy {
    Point _pos;
public:
    Enemy() = default;
    Enemy(const Point& p) : _pos(p) {}
    Enemy(const Enemy& other) = default;
    Enemy& operator=(const Enemy& other) = default;

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

    bool operator==(const Enemy& o) const { return _pos == o._pos; }
    bool operator!=(const Enemy& o) const { return !(*this == o); }

    friend std::istream& operator>>(std::istream& in, Enemy& e);
    friend std::ostream& operator<<(std::ostream& out, const Enemy& e);
};
