#include "scoreboard.hpp"

void Scoreboard::Save(const std::string& player, int score) {
    std::ofstream out("scores.txt", std::ios::app);
    out << player << " " << score << "\n";
}
