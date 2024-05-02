#define CATCH_CONFIG_MAIN

#include <catch2/catch_test_macros.hpp>
#include <string_view>

TEST_CASE("Ensure format is supported", "[std::format]")
{
    REQUIRE(std::string_view("Hello world!") == "Hello world");
}