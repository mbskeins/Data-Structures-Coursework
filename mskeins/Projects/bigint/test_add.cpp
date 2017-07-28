// bigint Test Program
//
// Tests:  int constructor, uses ==
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"
#include <fstream>

//===========================================================================
int main () {
  {
    std::cout << "Now Testing Input Operations" << std::endl;

    std::ifstream input("data1-1.txt");
    
    if(!input){
      std::cout<< "file could not be opened" << std::endl;
    }
    bigint left;

    while(input >> left){

      std::cout << "bigint inputted: " << left << std::endl;
}

    input.close();
  }


    {

        // VERY INCOMPLETE set of tests.


        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(0);
        bigint result;

        // Test 
        result = left + right;

        // Verify
        assert(left   == 0);
        assert(right  == 0);
        assert(result == 0);
    }

    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(0);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 0);
      assert(result == 1);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(1);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 1);
      assert(result == 2);
    }

    
    {
    // Setup fixture
    bigint left(0);
    bigint right(1);
    bigint result;

    // Test
    result = left + right;

    // Verify
    assert(left   == 0);
    assert(right  == 1);
    assert(result == 1);
}

{
// Setup fixture
bigint left(427);
bigint right(22);
bigint result;

// Test
result = left + right;

// Verify
assert(left   == 427);
assert(right  == 22);
assert(result == 449);
}

{
// Setup fixture
bigint left(39);
bigint right(221);
bigint result;

// Test
result = left + right;

// Verify
assert(left   == 39);
assert(right  == 221);
assert(result == 260);
}


{
// Setup fixture
bigint left(99999);
bigint right(1);
bigint result;

// Test
result = left + right;

// Verify
assert(left   == 99999);
assert(right  == 1);
assert(result == 100000);
}


{
// Setup fixture
bigint left(1);
bigint right("99999999999");
bigint result;

// Test
result = left + right;

// Verify
assert(left   == 1);
assert(right  == "99999999999");
assert(result == "100000000000");
}

 std::cout << "--- passed smaller digits ---" << std::endl;
 
{
// Setup fixture
bigint left("333333333333333333333333333333");
bigint right(7777);
bigint result;

// Test
result = left + right;

// Verify
assert(left   == "333333333333333333333333333333");
assert(right  == 7777);
assert(result == "333333333333333333333333341110");
}


{
// Setup fixture
bigint left(3333);
bigint right("77777777777777777777");
bigint result;

// Test
result = left + right;

// Verify
assert(left   == 3333);
assert(right  == "77777777777777777777");
assert(result == "77777777777777781110");
}


{
// Setup fixture
bigint left("11111111111111111111");
bigint right("99999999999999999999");
bigint result;

// Test
result = left + right;

// Verify
assert(left   == "11111111111111111111");
assert(right  == "99999999999999999999");
assert(result == "111111111111111111110");
}


 std::cout << "Finished Testing Addition Operator" << std::endl; 
    //Add test cases as needed.
    
    
 
}

