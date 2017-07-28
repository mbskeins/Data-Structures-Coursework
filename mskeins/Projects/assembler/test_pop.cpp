#include "stack.hpp"
#include <cassert>
//#include "string/string.hpp"

int main(){

  std::cout << "biggining int pop tests" << std::endl;
  {
    Stack<int> test;
    
    test.push(1);

    assert(test.top() == 1);
    test.pop();
    assert(test.isEmpty() == true);

  }
  {
    Stack<int> test;

    test.push(1);
    test.push(2);

    assert(test.top() == 2);
    test.pop();
    assert(test.top() == 1);

  }
  {
    Stack<int> test;

    test.push(1);
    test.push(2);
    test.push(567422);

    assert(test.top() == 567422);
    test.pop();
    test.pop();

    assert(test.top() == 1);

  }
  std::cout << "finished int pop test" << std::endl;

  std::cout << "starting string pop test" << std::endl;

  {
    Stack<std::string> test;
    
    test.push("hello");

    assert(test.top() == "hello");
    test.pop();
    assert(test.isEmpty() == true);
  }

  {
    Stack<std::string> test;

    test.push("hello");
    test.push("hello again");

    assert(test.top() == "hello again");
    test.pop();
    assert(test.top() == "hello");

  }
  {
    Stack<std::string> test;

    test.push("hello");
    test.push("hello again");
    test.push("hi");

    assert(test.top() == "hi");

    test.pop();
    assert(test.top() == "hello again");

    test.pop();
    assert(test.top() == "hello");

  }
  std::cout << "finished string pop tests" << std::endl;

  return 0;
}
