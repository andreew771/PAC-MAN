#include "enemy.hpp"

Enemy::Enemy(const std::string& t, int lvl) : type(t), dangerLevel(lvl) {}
Enemy::Enemy(const Enemy& other) : type(other.type), dangerLevel(other.dangerLevel) {}

Enemy& Enemy::operator=(const Enemy& other) {
    type = other.type;
    dangerLevel = other.dangerLevel;
    return *this;
}

bool Enemy::operator==(const Enemy& other) const {
    return type == other.type && dangerLevel == other.dangerLevel;
}

std::string Enemy::GetType() const { return type; }
int Enemy::GetDangerLevel() const { return dangerLevel; }

std::ostream& operator<<(std::ostream& out, const Enemy& e) {
    out << e.type << " (lvl " << e.dangerLevel << ")";
    return out;
}
