#include "player.hpp"

std::istream& operator>>(std::istream& in, Player& p) {
    Point pt;
    if (in >> pt) p._pos = pt;
    return in;
}

std::ostream& operator<<(std::ostream& out, const Player& p) {
    out << p._pos;
    return out;
}
