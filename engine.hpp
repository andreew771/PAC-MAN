#pragma once
#include "player.hpp"
#include "enemy.hpp"
#include "reward.hpp"
#include "view.hpp"
#include "map.hpp"
#include <vector>
#include <memory>

class Engine {
    Player _player;
    std::vector<Enemy> _enemies;
    std::vector<Reward> _rewards;
    Map _map;
    std::unique_ptr<View> _view;

public:
    Engine();
    void Init();
    void Run();

    Player& GetPlayer() { return _player; }
    std::vector<Enemy>& GetEnemies() { return _enemies; }
    std::vector<Reward>& GetRewards() { return _rewards; }
};
