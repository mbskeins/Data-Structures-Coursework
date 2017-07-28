#include "minibigint.hpp"
#include <cassert>
#include <iostream>

int main(){
  minibigint b;
  assert(b == 0);
  std::cout << "testing default constructor complete" << std::endl;

  return 0;
}
