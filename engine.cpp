#include "engine.hpp"
#include "view.hpp"

struct Engine {
    Player _player{{0,0}};
    Enemy _enemy{{5,5}};
    Reward _reward{{3,3}};

    void Run() {
        View v;
        v.Draw(_player.GetPosition(), 'P');
        v.Draw(_enemy.GetPosition(), 'E');
        v.Draw(_reward.GetPosition(), 'R');
    }
};
