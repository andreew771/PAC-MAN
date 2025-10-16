#include "map.hpp"

Map::Map(int w, int h) : _width(w), _height(h) {}
Map::Map(const Map& other) : _width(other.GetWidth()), _height(other.GetHeight()) {}

int Map::GetWidth() const { return _width; }
int Map::GetHeight() const { return _height; }

Map Map::operator=(const Map& other) {
    _width = other.GetWidth();
    _height = other.GetHeight();
    return *this;
}

bool Map::operator==(const Map& other) const {
    return _width == other.GetWidth() && _height == other.GetHeight();
}

std::istream& operator>>(std::istream& in, Map& m) {
    int w, h;
    in >> w >> h;
    m = Map(w, h);
    return in;
}

std::ostream& operator<<(std::ostream& out, const Map& m) {
    out << m.GetWidth() << " " << m.GetHeight();
    return out;
}
