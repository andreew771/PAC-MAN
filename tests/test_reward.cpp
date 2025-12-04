#include "catch.hpp"
#include "./Entities/reward.hpp"

TEST_CASE("Reward: constructor") {
    Reward r("Cherry", 10);
    REQUIRE(r.GetName() == "Cherry");
    REQUIRE(r.GetValue() == 10);
}

TEST_CASE("Reward: copy & compare") {
    Reward r1("Apple", 15);
    Reward r2(r1);
    REQUIRE(r1 == r2);
}
