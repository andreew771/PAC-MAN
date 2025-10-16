#include "engine.hpp"

void Engine::Run() {
    View v;
    v.Draw(_player.GetPosition(), 'P');
    v.Draw(_enemy.GetPosition(), 'E');
    v.Draw(_reward.GetPosition(), 'R');
}
