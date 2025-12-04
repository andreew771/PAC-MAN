#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "./Entities/player.hpp"

TEST_CASE("Player: constructor & getters") {
    Player p("Pacman", 0);
    REQUIRE(p.GetName() == "Pacman");
    REQUIRE(p.GetScore() == 0);
}

TEST_CASE("Player: AddScore") {
    Player p("Test", 10);
    p.AddScore(5);
    REQUIRE(p.GetScore() == 15);
}

TEST_CASE("Player: copy constructor") {
    Player p1("A", 100);
    Player p2(p1);
    REQUIRE(p1 == p2);
}
