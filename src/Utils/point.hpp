#pragma once
#include <iostream>

struct Point {
    int x{0}, y{0};
    Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
    Point(const Point& o) = default;
    Point& operator=(const Point& o) = default;
    bool operator==(const Point& o) const { return x==o.x && y==o.y; }
    bool operator!=(const Point& o) const { return !(*this==o); }
};

inline std::istream& operator>>(std::istream& in, Point& p) { return in >> p.x >> p.y; }
inline std::ostream& operator<<(std::ostream& out, const Point& p) { return out << p.x << ' ' << p.y; }
