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

        // TEST
        String  str('x');

        // VERIFY
        assert(str == 'x');
    }
    
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("xxx");

        // VERIFY
        assert(str == "xxx");
    }
    
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("abcdef");

        // VERIFY
        assert(str == "abcdef");
    }
    
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str;

        // VERIFY
        assert(str == 0);
    }
    
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("space x");

        // VERIFY
        assert(str == "space x");
    }
    
    {
      //------------------------------------------------------
      // SETUP FIXTURE

      // TEST
      String  str(50 , "abc");

      // VERIFY
      assert(str == "abc");
      assert(str.length() == 3);

    }

    {
      //------------------------------------------------------
      // SETUP FIXTURE

      // TEST
      String  str("abc");
       String test(str);

      // VERIFY
       assert(test == "abc");
      

    }


    {
      //------------------------------------------------------
      // SETUP FIXTURE

      // TEST
      String  str("012345");

      // VERIFY
      assert(str.length() == 6);
      assert(str.capacity() == 256);
      std::cout << "length and capacity functions passed" << std::endl;
    }

    
    std::cout << "Done testing constructors & accessors" << std::endl;

}

