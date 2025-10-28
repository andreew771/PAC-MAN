#pragma once
#include "point.hpp"

class Reward {
    Point _position;
public:
    Reward();
    Reward(const Point& pos);
    Point GetPosition() const;
};