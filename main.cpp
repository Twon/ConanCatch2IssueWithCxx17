#define CATCH_CONFIG_MAIN

#include <catch2/catch_all.hpp>
#include <format>

TEST_CASE("Ensure format is supported", "[std::format]")
{
    REQUIRE(std::format("Hello {}!", "world") == "Hello world");
}