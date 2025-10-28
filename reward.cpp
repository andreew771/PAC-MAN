#include "reward.hpp"

std::istream& operator>>(std::istream& in, Reward& r) {
    Point pt;
    if (in >> pt) r._pos = pt;
    return in;
}

std::ostream& operator<<(std::ostream& out, const Reward& r) {
    out << r._pos;
    return out;
}
