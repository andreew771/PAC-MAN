#include "player.hpp"

Player::Player() : _position(0,0) {}
Player::Player(const Point& pos) : _position(pos) {}
Player::Player(const Player& other) : _position(other.GetPosition()) {}

Point Player::GetPosition() const { return _position; }

Player Player::operator=(const Player& other) {
    _position = other.GetPosition();
    return *this;
}

bool Player::operator==(const Player& other) const {
    return _position == other.GetPosition();
}

void Player::Move(Direction dir) {
    switch (dir) {
        case Direction::UP:    _position.y--; break;
        case Direction::DOWN:  _position.y++; break;
        case Direction::LEFT:  _position.x--; break;
        case Direction::RIGHT: _position.x++; break;
    }
}

std::istream& operator>>(std::istream& in, Player& p) {
    Point pos;
    in >> pos;
    p = Player(pos);
    return in;
}

std::ostream& operator<<(std::ostream& out, const Player& p) {
    out << p.GetPosition();
    return out;
}
