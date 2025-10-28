#pragma once
#include <iostream>

class Map {
    int _width{10}, _height{10};
public:
    Map(int w = 10, int h = 10) : _width(w), _height(h) {}
    Map(const Map&) = default;
    Map& operator=(const Map&) = default;

    int GetWidth() const { return _width; }
    int GetHeight() const { return _height; }

    friend std::istream& operator>>(std::istream& in, Map& m){ return in >> m._width >> m._height; }
    friend std::ostream& operator<<(std::ostream& out, const Map& m){ return out << m._width << ' ' << m._height; }
};
