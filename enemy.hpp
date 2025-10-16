#pragma once
#include "point.hpp"
#include "direction.hpp"
#include <iostream>

class Enemy {
    Point _position;
public:
    Enemy();
    Enemy(const Point& pos);
    Enemy(const Enemy& other);
    Point GetPosition() const;

    Enemy operator=(const Enemy& other);
    bool operator==(const Enemy& other) const;

    void Move(Direction dir);

    friend std::istream& operator>>(std::istream& in, Enemy& e);
    friend std::ostream& operator<<(std::ostream& out, const Enemy& e);
};

