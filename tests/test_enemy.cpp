#include "catch.hpp"
#include "./Entities/enemy.hpp"

TEST_CASE("Enemy: constructor") {
    Enemy e("Blinky", 3);
    REQUIRE(e.GetType() == "Blinky");
    REQUIRE(e.GetDangerLevel() == 3);
}

TEST_CASE("Enemy: comparison") {
    Enemy e1("Pinky", 2);
    Enemy e2("Pinky", 2);
    REQUIRE(e1 == e2);
}
