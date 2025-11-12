#include "reward.hpp"

Reward::Reward(const std::string& n, int v) : name(n), value(v) {}
Reward::Reward(const Reward& other) : name(other.name), value(other.value) {}

Reward& Reward::operator=(const Reward& other) {
    name = other.name;
    value = other.value;
    return *this;
}

bool Reward::operator==(const Reward& other) const {
    return name == other.name && value == other.value;
}

int Reward::GetValue() const { return value; }
std::string Reward::GetName() const { return name; }

std::ostream& operator<<(std::ostream& out, const Reward& r) {
    out << r.name << " +" << r.value << " pts";
    return out;
}
