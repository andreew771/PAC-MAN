#include "catch.hpp"
#include "./Utils/point.hpp"

TEST_CASE("Point: comparison") {
    Point a(2, 3);
    Point b(2, 3);
    REQUIRE(a == b);
}

TEST_CASE("Point: inequality") {
    Point a(1, 2);
    Point b(3, 4);
    REQUIRE(a != b);
}
