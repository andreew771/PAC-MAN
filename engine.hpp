#pragma once
#include "player.hpp"
#include "enemy.hpp"
#include "reward.hpp"

class GameEngine {
    Player _player;
    Enemy _enemy;
    Reward _reward;
public:
    GameEngine();
    void Init();
    void Run();
};