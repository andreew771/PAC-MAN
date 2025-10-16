#pragma once
#include <iostream>

class Map {
    int _width;
    int _height;
public:
    Map(int w = 10, int h = 10);
    Map(const Map& other);

    int GetWidth() const;
    int GetHeight() const;

    Map operator=(const Map& other);
    bool operator==(const Map& other) const;

    friend std::istream& operator>>(std::istream& in, Map& m);
    friend std::ostream& operator<<(std::ostream& out, const Map& m);
};
