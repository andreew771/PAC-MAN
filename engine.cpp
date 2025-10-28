#include "engine.hpp"
#include <algorithm>
#include <iostream>

Engine::Engine() : _player({0,0}), _map(20,20), _view(std::make_unique<View>()) {}

void Engine::Init() {
    _enemies.clear();
    _enemies.emplace_back(Point{5,5});
    _enemies.emplace_back(Point{2,8});
    _enemies.emplace_back(Point{10,3});

    _rewards.clear();
    _rewards.emplace_back(Point{3,3});
    _rewards.emplace_back(Point{7,7});
}

void Engine::Run() {
    
    std::sort(_enemies.begin(), _enemies.end(), [](const Enemy& a, const Enemy& b){
        return a.GetPosition().x < b.GetPosition().x;
    });

  
    _view->Draw(_player.GetPosition(), 'P');
    for (const auto& e : _enemies) _view->Draw(e.GetPosition(), 'E');
    for (const auto& r : _rewards) _view->Draw(r.GetPosition(), 'R');

   
    auto it = std::find_if(_rewards.begin(), _rewards.end(), [this](const Reward& r){
        return r.GetPosition() == _player.GetPosition();
    });

    if (it != _rewards.end())
        _view->WriteText(_player.GetPosition(), std::string("Collected!"));
    else
        _view->WriteText(Point{0, _map.GetHeight()+1}, std::string("No reward here."));

   
    std::vector<Reward> topLeft;
    std::copy_if(_rewards.begin(), _rewards.end(), std::back_inserter(topLeft),
                 [](const Reward& rr){ auto p=rr.GetPosition(); return p.x<6 && p.y<6; });

    if (!topLeft.empty()) {
        _view->WriteText(Point{0, _map.GetHeight()+2}, std::string("Top-left rewards:"));
        for (const auto& r : topLeft) std::cout << r << '\n';
    }
}
