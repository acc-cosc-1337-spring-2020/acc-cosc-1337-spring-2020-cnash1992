#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "ref_pointers.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test the references ref_pointers function") 
{
	int r = 0, p = 0;

	ref_pointers(r, &p);

	REQUIRE(r == 100);
	REQUIRE(p == 66);
}