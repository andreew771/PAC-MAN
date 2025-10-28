#include "enemy.hpp"

std::istream& operator>>(std::istream& in, Enemy& e) {
    Point pt;
    if (in >> pt) e._pos = pt;
    return in;
}

std::ostream& operator<<(std::ostream& out, const Enemy& e) {
    out << e._pos;
    return out;
}
