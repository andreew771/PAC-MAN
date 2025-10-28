#pragma once
#include "point.hpp"
#include "direction.hpp"

class Enemy {
    Point _position;
public:
    Enemy();
    Enemy(const Point& pos);
    Point GetPosition() const;
    void Move(Direction dir);
};