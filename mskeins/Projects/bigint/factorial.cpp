#include <iostream>
#include "bigint.hpp"

int zeroCount(bigint&);

int main(){


  bigint test(100);

 int zero =  zeroCount(test);

 std::cout << std::endl << "Trailing Zero Count In 100: " << zero << std::endl;
 std::cout << std::endl;



}


int zeroCount (bigint& num){

  int count = 0;
  int index = SIZE -1;

  while(index >= 0){

    if (num[index] == 0)
      {
	count++;
	index--;
      }else{
      break;
      }

  }

  return count;
}
