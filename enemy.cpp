#include "enemy.hpp"

Enemy::Enemy() : _position{5,5} {}
Enemy::Enemy(const Point& pos) : _position{pos} {}
Point Enemy::GetPosition() const { return _position; }
void Enemy::Move(Direction dir) {
    if (dir == Direction::UP) _position.y--;
    else if (dir == Direction::DOWN) _position.y++;
    else if (dir == Direction::LEFT) _position.x--;
    else if (dir == Direction::RIGHT) _position.x++;
}