#include "stack.hpp"
#include <cassert>

int main(){
  std::cout << "biggining int pop tests" << std::endl;
  {
    Stack<int> test;
    
    test.push(1);

    assert(test.top() == 1);
  }
  {
    Stack<int> test;

    test.push(1);
    test.push(2);

    assert(test.top() == 2);
  }
  {
    Stack<int> test;

    test.push(1);
    test.push(2);
    test.push(567422);

    assert(test.top() == 567422);
  }
  std::cout << "finished int push test" << std::endl;

  std::cout << "starting string push test" << std::endl;
  {
    Stack<std::string> test;
    
    test.push("hello");

    assert(test.top() == "hello");
  }
  {
    Stack<std::string> test;

    test.push("hello");
    test.push("hello again");

    assert(test.top() == "hello again");

  }
  {
    Stack<std::string> test;

    test.push("hello");
    test.push("hello again");
    test.push("hi");

    assert(test.top() == "hi");
  }
  std::cout << "finished string push tests" << std::endl;
  return 0;
}
