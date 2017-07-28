//  String class test program
//
//  Name:  XXX
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
        String  left("abc");
        String  right("abc");

        // TEST
        String  result = (left +  right);

        // VERIFY
        assert(result == "abcabc");
    }

    {
      //------------------------------------------------------
      // SETUP FIXTURE
      String  left("abc");
      String  right("abc");

      // TEST
      String  result = (left +  "abc");

      // VERIFY
      assert(result == "abcabc");
    }

    {
      //------------------------------------------------------
      // SETUP FIXTURE
      String  left("abc");
      String  right("abc");

      // TEST
      String  result = (left +  'a');

      // VERIFY
      assert(result == "abca");
    }


    {
      //------------------------------------------------------
      // SETUP FIXTURE
      String  left("abc");
      String  right("abc");

      // TEST
      String  result = ("abc" + left);

      // VERIFY
      assert(result == "abcabc");
    }

    {
      //------------------------------------------------------
      // SETUP FIXTURE
      String  left("abc");
      //      String  right("abc");

      // TEST
      String  result = ('a' + left);

      // VERIFY
      assert(result == "aabc");
    }


    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "finished testing addition." << std::endl;

    {
      //------------------------------------------------------
      // SETUP FIXTURE
      String  left("abc");
      const String  right("abc");

      // TEST
      // String  result = ('a' + left);

      // VERIFY
      assert(left[2] == 'c');
      assert(right[2] == 'c');
    }
    std::cout << "finished testing subscript" << std::endl;


{
      //------------------------------------------------------
      // SETUP FIXTURE
      String  left("abc");
      String  right("cba");

      // TEST
      left.swap(right);

      // VERIFY
      assert(left == "cba");
    }

 std::cout << "finished testing swap" << std::endl;

 {
   //------------------------------------------------------
   // SETUP FIXTURE
   // String  left("abc");
   String  right;

   // TEST
   right = "abc";
   // VERIFY
   assert(right == "abc");
 }
 std::cout << "finished testing assingment operator" << std::endl;

 {
   //------------------------------------------------------
   // SETUP FIXTURE
   // String  left("abc");
   String  right("abc");

   // TEST
   right.resetCapacity(50);
   // VERIFY
   assert(right.capacity() == 50);
 }
 std::cout << "finished testing resetCapacity" << std::endl;


}

