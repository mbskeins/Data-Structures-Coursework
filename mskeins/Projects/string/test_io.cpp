//  String class test program
//
//  Tests: XXX
//

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("abcdefg");

        // TEST
    

        // VERIFY
	std::cout << str << std::endl;
    }

    {
      //------------------------------------------------------
      // SETUP FIXTURE
      String  str("two words");

      // TEST


      // VERIFY
      std::cout << str << std::endl;
    }

        
    std::cout << "Done testing io." << std::endl;
}

