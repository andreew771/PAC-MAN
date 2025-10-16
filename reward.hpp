#pragma once
#include "point.hpp"
#include <iostream>

class Reward {
    Point _position;
public:
    Reward();
    Reward(const Point& pos);
    Reward(const Reward& other);
    Point GetPosition() const;

    Reward operator=(const Reward& other);
    bool operator==(const Reward& other) const;

    friend std::istream& operator>>(std::istream& in, Reward& r);
    friend std::ostream& operator<<(std::ostream& out, const Reward& r);
};
