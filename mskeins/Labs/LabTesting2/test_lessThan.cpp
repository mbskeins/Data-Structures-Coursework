#include <iostream>
#include "string.hpp"
#include <cassert>

int main (){
  std::cout << "tests have started" << std::endl;

        {
	  String test("aaaa");

	  assert(test < "ab");
	 
	  std::cout<< "first test has passed" << std::endl;

	}

	{
	  String test("aa");

	  assert(test < "aaa");

	  std::cout<< "Second Test Passed" << std::endl;
	}

	{
	  String test("Aa");
	  
	  assert(test < "aa");

	  std::cout << "third test passed" << std::endl;

	}

	{
	  //this test shouldn't have passed but it did found error
	  
	  // String test("cat0");

	  //assert(test< "cat0");
	}
return 0;
}
