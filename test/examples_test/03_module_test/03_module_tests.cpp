#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "while.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Testing sum of squares while loops") 
{
	REQUIRE(sum_of_squares(5) == 55);
	REQUIRE(sum_of_squares(4) == 30);
	REQUIRE(sum_of_squares(3) == 14);
}
