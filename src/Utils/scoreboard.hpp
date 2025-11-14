#pragma once
#include <fstream>
#include <string>

class Scoreboard {
public:
    static void Save(const std::string& player, int score);
};
