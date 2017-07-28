#include "stack.hpp"
#include <cassert>

int main(){
  std::cout << "beggining integer stack test" << std::endl;

  {
    Stack<int> empty_stack;
    
    assert(empty_stack.isEmpty() == true);

    empty_stack.push(5);
    
    assert(empty_stack.top() == 5);
   
    empty_stack.pop();
    empty_stack.push(456);

    assert(empty_stack.top() == 456); 
  }
  {
    Stack<int> test;
    test.push(100);
    Stack<int> temp = test;
    Stack<int> tamp;

    assert(temp.top() == test.top());
     tamp = test;
     //std::cout << "passed" << std::endl;
     assert(tamp.top() == 100);
     assert(temp.top() == 100);
  }
  
  {
    //  std::cout << "testing swap function" << std::endl;
    Stack<int> test;
    Stack<int> temp;

    test.push(45);
    temp.push(1);
    test.swap(temp);

    assert(test.top() == 1);
  }
  std::cout << "int ctor tests complete" << std::endl;

  std::cout << "beggining string ctor tests" << std::endl;

  {
    Stack<std::string> test;
    assert(test.isEmpty() == true);
  }


  {
    Stack<std::string> test;
    test.push("hello");
    assert(test.top() == "hello");

    test.pop();
    assert(test.isEmpty() == true);
  }
  {
    Stack<std::string> test;
    Stack<std::string> temp;

    test.push("two words");
    temp = test;

    assert(temp.top() == "two words");
  }

  {
    Stack<std::string> test;
    Stack<std::string> temp;

    test.push("two");
    temp = test;

    assert(temp.top() == "two");
  }

 
  {
    Stack<std::string> test;
    Stack<std::string> temp;

    test.push("two words");

    temp.push("oneword");

    test = temp;
    assert(test.top() == "oneword");
  }

  {
    Stack<std::string> test;
    Stack<std::string> temp;

    test.push("two words");

    temp.push("big huge very long sentence");

    test = temp;
    assert(test.top() == "big huge very long sentence");
  }


  std::cout << "string ctor tests complete" << std::endl;

 
  return 0;
}
