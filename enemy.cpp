#include "enemy.hpp"

Enemy::Enemy() : _position(0,0) {}
Enemy::Enemy(const Point& pos) : _position(pos) {}
Enemy::Enemy(const Enemy& other) : _position(other.GetPosition()) {}

Point Enemy::GetPosition() const { return _position; }

Enemy Enemy::operator=(const Enemy& other) {
    _position = other.GetPosition();
    return *this;
}

bool Enemy::operator==(const Enemy& other) const {
    return _position == other.GetPosition();
}

void Enemy::Move(Direction dir) {
    switch (dir) {
        case Direction::UP:    _position.y--; break;
        case Direction::DOWN:  _position.y++; break;
        case Direction::LEFT:  _position.x--; break;
        case Direction::RIGHT: _position.x++; break;
    }
}

std::istream& operator>>(std::istream& in, Enemy& e) {
    Point p;
    in >> p;
    e = Enemy(p);
    return in;
}

std::ostream& operator<<(std::ostream& out, const Enemy& e) {
    out << e.GetPosition();
    return out;
}
