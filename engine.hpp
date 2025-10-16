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
    Engine() = default;
    void Init() {}
    void Run();
};
