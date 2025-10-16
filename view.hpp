#pragma once
#include "point.hpp"
#include <iostream>

// Clasă abstractă pentru redarea obiectelor de joc
class ViewBase {
public:
    virtual void Draw(Point pos, char symbol) = 0;
    virtual ~ViewBase() = default;
};

class View : public ViewBase {
public:
    void Draw(Point pos, char symbol) override {
        std::cout << symbol << " at " << pos << "\n";
    }
};
