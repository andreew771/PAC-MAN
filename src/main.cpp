#include "engine.hpp"
#include "scoreboard.hpp"
#include "obstacle.hpp"


int main() {
    Engine game;
    game.Init();
    game.Run();
    Scoreboard::Save("Pacman", 100);
    return 0;
}
