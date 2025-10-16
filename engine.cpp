#include "engine.hpp"

Engine::Engine() : _player({0,0}), _enemy({5,5}), _reward({3,3}) {}

void Engine::Init() {}

void Engine::Run() {
    View v;
    v.Draw(_player.GetPosition(), 'P');
    v.Draw(_enemy.GetPosition(), 'E');
    v.Draw(_reward.GetPosition(), 'R');
}
