#include "player.hpp"

Player::Player() : _position{0,0} {}
Player::Player(const Point& pos) : _position{pos} {}
Point Player::GetPosition() const { return _position; }
void Player::Move(Direction dir) {
    if (dir == Direction::UP) _position.y--;
    else if (dir == Direction::DOWN) _position.y++;
    else if (dir == Direction::LEFT) _position.x--;
    else if (dir == Direction::RIGHT) _position.x++;
}