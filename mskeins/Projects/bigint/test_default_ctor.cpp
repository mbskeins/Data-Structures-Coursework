// bigint Test Program
//
// Tests:  default constructor, uses ==
//
//  
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    // Setup

    // Test 
   bigint bi;
   // std::cout<< bi << std::endl << std::endl << std::endl;

    // bigint test(0);
    // std::cout << test << std::endl << std::endl;

    // Verify
    assert(bi == 0);
    std::cout << "0 == " << bi << std::endl;

    std::cout << "Done testing default constructor." << std::endl;
}

