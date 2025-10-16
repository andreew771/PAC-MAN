#pragma once
#include "point.hpp"
#include "direction.hpp"
#include <iostream>

class Player {
    Point _position;
public:
    Player();
    Player(const Point& pos);
    Player(const Player& other);
    Point GetPosition() const;

    Player operator=(const Player& other);
    bool operator==(const Player& other) const;

    void Move(Direction dir);

    friend std::istream& operator>>(std::istream& in, Player& p);
    friend std::ostream& operator<<(std::ostream& out, const Player& p);
};
