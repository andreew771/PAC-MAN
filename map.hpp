#pragma once
#include <vector>
#include <string>

class Map {
    int width, height;
    std::vector<std::string> layout;

public:
    Map(int w = 10, int h = 10);
    void Generate();
    void Display() const;
};
