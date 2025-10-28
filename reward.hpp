#pragma once
#include "point.hpp"
#include <iostream>

class Reward {
    Point _pos;
public:
    Reward() : _pos(3,3) {}
    Reward(const Point& p) : _pos(p) {}
    Reward(const Reward& other) = default;
    Reward& operator=(const Reward& other) = default;

    Point GetPosition() const { return _pos; }
    void SetPosition(const Point& p) { _pos = p; }

    bool operator==(const Reward& o) const { return _pos == o._pos; }
    bool operator!=(const Reward& o) const { return !(*this == o); }

    friend std::istream& operator>>(std::istream& in, Reward& r);
    friend std::ostream& operator<<(std::ostream& out, const Reward& r);
};
