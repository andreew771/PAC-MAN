#include "reward.hpp"

Reward::Reward() : _position(3,3) {}
Reward::Reward(const Point& pos) : _position(pos) {}
Reward::Reward(const Reward& other) : _position(other.GetPosition()) {}

Point Reward::GetPosition() const { return _position; }

Reward Reward::operator=(const Reward& other) {
    _position = other.GetPosition();
    return *this;
}

bool Reward::operator==(const Reward& other) const {
    return _position == other.GetPosition();
}

std::istream& operator>>(std::istream& in, Reward& r) {
    Point p;
    in >> p;
    r = Reward(p);
    return in;
}

std::ostream& operator<<(std::ostream& out, const Reward& r) {
    out << r.GetPosition();
    return out;
}
