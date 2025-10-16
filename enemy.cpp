#include "enemy.hpp"

void Enemy::Move(Direction dir) {
    switch (dir) {
        case Direction::UP:    _position.y--; break;
        case Direction::DOWN:  _position.y++; break;
        case Direction::LEFT:  _position.x--; break;
        case Direction::RIGHT: _position.x++; break;
    }
}
