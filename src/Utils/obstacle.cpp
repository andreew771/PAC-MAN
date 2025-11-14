#include "Obstacle.hpp"

Obstacle::Obstacle(int x, int y, int damage, const std::string& type)
    : x(x), y(y), damage(damage), type(type) {}

int Obstacle::getX() const { return x; }
int Obstacle::getY() const { return y; }
int Obstacle::getDamage() const { return damage; }
std::string Obstacle::getType() const { return type; }

void Obstacle::print() const {
    std::cout << "Obstacle: " << type
              << " at (" << x << ", " << y << ")"
              << " Damage = " << damage << "\n";
}
