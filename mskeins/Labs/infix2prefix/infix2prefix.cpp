#include <iostream>
#include <string>
#include <stack>
#include <fstream>


char getline(std::istream &input);

int main(int argc, char* argv []){

  if (argc != 2 && argc !=3){
    std::cout << "invalid number of arguments" << std::endl;
    return 1;
 }

  std::ofstream output;
  std::ifstream input;

  
    input.open(argv[1]);
    if(!input.is_open()){
      std::cout << "input file not open" << std::endl;
      return 2;
    }

    output.open(argv[2]);    
    if ( argc == 3 && !output.is_open()){
      std::cout << "invalid output" << std::endl;
      return 3;
    }

  return 0;
}

char getline(std::istream &input){
  if (input.fail())
    {
      std::cout<<"Error: file is not open" << std::endl;
    }
   
  char ch;
  
  input.get(ch);

  if(ch == ' '){input.get(ch);}

  return ch;

}
