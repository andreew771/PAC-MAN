#include "engine.hpp"
#include <iostream>
#include <algorithm>

Engine::Engine() : player(std::make_shared<Player>("Pacman")) {}

void Engine::Init() {
    map.Generate();
    enemies = { Enemy("Blinky", 3), Enemy("Pinky", 2) };
    rewards = { Reward("Cherry", 10), Reward("Apple", 15) };
}

void Engine::Run() {
    map.Display();
    std::cout << *player << "\n";

    std::for_each(rewards.begin(), rewards.end(), [&](auto& r) {
        player->AddScore(r.GetValue());
    });

    std::cout << "Final score: " << player->GetScore() << "\n";
}

