#pragma once
#include <iostream>

struct Point {
    int x{0}, y{0};

    // Constructori
    Point() = default;
    Point(int xx, int yy) : x(xx), y(yy) {}
    Point(const Point& other) : x(other.x), y(other.y) {}

    // Operator de atribuire
    Point& operator=(const Point& other) {
        if (this != &other) { x = other.x; y = other.y; }
        return *this;
    }

    // Operatori de comparare
    bool operator==(const Point& other) const { return x == other.x && y == other.y; }
    bool operator!=(const Point& other) const { return !(*this == other); }

    // Operatori de intrare/ieșire
    friend std::ostream& operator<<(std::ostream& os, const Point& p) {
        return os << "(" << p.x << "," << p.y << ")";
    }
    friend std::istream& operator>>(std::istream& is, Point& p) {
        return is >> p.x >> p.y;
    }
};
