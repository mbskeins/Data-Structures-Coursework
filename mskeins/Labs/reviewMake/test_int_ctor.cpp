#include "minibigint.hpp"
#include <cassert>
#include <iostream>

int main(){

  minibigint test(3);

  assert(test == 3);

  std::cout <<  "testing integer constructor complete" << std::endl;

  return 0;
}
