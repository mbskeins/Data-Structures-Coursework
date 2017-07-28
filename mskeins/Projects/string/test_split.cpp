#include "string.hpp"
#include <cassert>
#include <iostream>
#include <vector>

int main(){

  {
    std::cout << "beggining split test" << std::endl;    
    String str("hold the door");
    std::vector<String> result;

    result = str.split(' ');

    assert(str == "hold the door");
    assert(result[0] == "hold");
    assert(result[1] == "the");
    assert(result[2] == "door"); 
  }

  {
   
    String str("hugewordrighthere and small");
    std::vector<String> result;

    result = str.split(' ');
  
    assert(str == "hugewordrighthere and small");
    assert(result[0] == "hugewordrighthere");
    assert(result[1] == "and");
    assert(result[2] == "small");
  }
  
  {
    
    String str("aaabaaabaaab");
    std::vector<String> result;

    result = str.split('b');

    assert(str == "aaabaaabaaab");
    assert(result[0] == "aaa");
    assert(result[1] == "aaa");
    assert(result[2] == "aaa");

  }

  {
    String str("123");

    std::vector<String> result;

    result = str.split();

    assert(str == "123");
    assert(result[0] == "1");
    assert(result[1] == "2");
    assert(result[2] == "3");


  }
  std::cout << "split test complete" << std::endl;



  return 0;
}
