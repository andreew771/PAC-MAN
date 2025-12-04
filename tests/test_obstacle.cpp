#include "catch.hpp"
#include "./Utils/obstacle.hpp"

TEST_CASE("Obstacle: getters") {
    Obstacle o(5, 6, 10, "Wall");
    REQUIRE(o.getX() == 5);
    REQUIRE(o.getY() == 6);
    REQUIRE(o.getDamage() == 10);
    REQUIRE(o.getType() == "Wall");
}
