#include <iostream>
#include <fstream>
#include "bigint.hpp"


int main(){
  
  //filename opened
  std::ifstream input("data1-1.txt");

  //Incase file can't be opened
  if(!input)
    {std::cout << "file could not be opened" << std::endl;}

  bigint one, two;
  while(input >> one && input >> two){
    
    //output both inputted numbers
    std::cout << "First number: " << one << std::endl << std::endl;
    std::cout << "Second number: " << two << std::endl << std::endl;

    bigint result = one + two;
    //output results
    std::cout << "Result of Addition: " << result << std::endl;
    std::cout << "-------------" << std::endl;

  }
  
  input.close();

  return 0;
}
