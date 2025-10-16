#pragma once
#include "player.hpp"
#include "enemy.hpp"
#include "reward.hpp"
#include "view.hpp"

class Engine {
    Player _player;
    Enemy _enemy;
    Reward _reward;
public:
    Engine();
    void Init();
    void Run();
};
