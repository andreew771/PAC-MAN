#pragma once
#include "point.hpp"
#include "direction.hpp"

class Player {
    Point _position;
public:
    Player();
    Player(const Point& pos);
    Point GetPosition() const;
    void Move(Direction dir);
};