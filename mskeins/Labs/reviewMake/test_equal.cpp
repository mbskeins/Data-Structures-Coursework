#include "minibigint.hpp"
#include <iostream>
#include <cassert>

int main(){
  minibigint test(12);
  minibigint test2(12);

  assert(test == test2);
  std::cout << "equal operator test complete" << std::endl;
  return 0;
}
