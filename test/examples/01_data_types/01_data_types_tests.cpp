#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "int.h"
#include "decimals.h"
#include "char.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test echo variable function", "do values echo") 
{
	REQUIRE(echo_variable(5)==5);//assertion
	REQUIRE(echo_variable(10)==10);//assertion
	REQUIRE(echo_variable(100)==100);//assertion
}

/*test case echo_variable */

/*test case add_to_double_1 with 0 as parameter*/

/*test case add_to_double_1 with 1 as parameter*/

/*test case add_to_double_2 with 0 as parameter*/
TEST_CASE("Test add to double 1 w 0 function", "do values echo")
{
	//REQUIRE(add_to_double_1(1) == 1.9);
}

TEST_CASE("Test get char ascii value funciton", "do values echo")
{
	REQUIRE(get_char_ascci_value('A')==65);
	REQUIRE(get_char_ascci_value('a')==97);
}
/*test case add_to_double_2 with 1 as parameter*/

/*test case char test ASCII values */

/*test case string test ASCII values Joe characters are equal to 74, 111, and 101*/

