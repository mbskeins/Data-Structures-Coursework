#include <iostream>

unsigned long fib(unsigned long n);


int main(int argc, char* argv[]){
  if (argc != 2){std::cerr << "invalid number of arguments" << std::endl;}

  unsigned long input = 0;

  for (int i =0; argv[1][i] != 0; i++){
    input *= 10;
    input += argv[1][i] - '0';
    // std::cout <<"input: " <<input << std::endl;
  }
  //  std::cout << input << std::endl;

  int i = 0;
  while (i <= input){
    std::cout << fib(i) << ", ";
     i++;
    }

}
unsigned long fib(unsigned long n){
  if (n == 0){return n;} 
  if (n == 1){return n;}
  if( n > 1){
  return fib(n-2) + fib(n-1);
  }
}
