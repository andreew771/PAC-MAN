#include "player.hpp"

Player::Player(const std::string& n, int s) : name(n), score(s) {}
Player::Player(const Player& other) : name(other.name), score(other.score) {}

Player& Player::operator=(const Player& other) {
    name = other.name;
    score = other.score;
    return *this;
}

bool Player::operator==(const Player& other) const {
    return name == other.name && score == other.score;
}

void Player::AddScore(int value) { score += value; }
int Player::GetScore() const { return score; }
std::string Player::GetName() const { return name; }

std::istream& operator>>(std::istream& in, Player& p) {
    in >> p.name >> p.score;
    return in;
}

std::ostream& operator<<(std::ostream& out, const Player& p) {
    out << p.name << " (" << p.score << ")";
    return out;
}
