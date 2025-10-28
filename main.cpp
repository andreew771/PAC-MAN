#include "engine.hpp"
#include <iostream>
#include <algorithm>

int main() {
    Engine engine;
    engine.Init();

    std::cout << "--- Initial state ---\n";
    engine.Run();

 
    std::cout << "Enter new player position (x y): ";
    Point p;
    if (std::cin >> p) {
        engine.GetPlayer().SetPosition(p);
    }


    auto& enemies = engine.GetEnemies();
    if (!enemies.empty()) {
        auto nearest = std::min_element(enemies.begin(), enemies.end(), [&engine](const Enemy& a, const Enemy& b){
            auto pa = a.GetPosition();
            auto pb = b.GetPosition();
            auto pp = engine.GetPlayer().GetPosition();
            int da = std::abs(pa.x-pp.x) + std::abs(pa.y-pp.y);
            int db = std::abs(pb.x-pp.x) + std::abs(pb.y-pp.y);
            return da < db;
        });
        std::cout << "Nearest enemy at: " << nearest->GetPosition() << '\n';
    }

    std::cout << "\n--- After update ---\n";
    engine.Run();
    return 0;
}
