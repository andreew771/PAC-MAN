#include "map.hpp"
#include <iostream>

Map::Map(int w, int h) : width(w), height(h) {}
void Map::Generate() {
    layout.assign(height, std::string(width, '.'));
}
void Map::Display() const {
    for (auto& line : layout)
        std::cout << line << "\n";
}
