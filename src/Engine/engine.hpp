#pragma once
#include <memory>
#include "player.hpp"
#include "enemy.hpp"
#include "reward.hpp"
#include "map.hpp"

class Engine {
    std::shared_ptr<Player> player;
    std::vector<Enemy> enemies;
    std::vector<Reward> rewards;
    Map map;

public:
    Engine();
    void Init();
    void Run();
};
