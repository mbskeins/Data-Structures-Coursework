// bigint Test Program
//
// Tests:  subscript, uses ==
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
      
    {
        // Setup
        bigint bi(4);

        // Test 
        int digit = bi[0];

        // Verify
        assert(bi    == 4);  
        assert(digit == 4);
    }
    


    {
      // Setup
      bigint bi(637);

      // Test
      int digit = bi[0];

      // Verify
      assert(bi    == 637);
      assert(digit == 7);
    }



    {
      // Setup
      bigint bi(8769);

      // Test
      int digit = bi[1];

      // Verify
      assert(bi    == 8769);
      assert(digit == 6);
    }



    {
      // Setup
      bigint bi(123456);

      // Test
      int digit = bi[2];

      // Verify
      assert(bi    == 123456);
      assert(digit == 4);
    }




    {
      // Setup
      bigint bi(12345);

      // Test
      int digit = bi[3];

      // Verify
      assert(bi    == 12345);
      assert(digit == 2);
    }



    {
      // Setup
      bigint bi("90987654321");

      // Test
      int digit = bi[10];

      // Verify
      assert(bi    == "90987654321");
      assert(digit == 9);
    }
 
 

    std::cout << "Done testing subscript." << std::endl;
}

