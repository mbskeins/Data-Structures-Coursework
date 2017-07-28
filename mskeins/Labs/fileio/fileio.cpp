/*
 * Matt Skeins
 * Fileio Lab 4
 * CS 23001
*/



#include <iostream>
#include <fstream>

void outputTxt();
void outputNonWhiteSpace();
void outputSum();

int main(){

  outputTxt();
  outputNonWhiteSpace();
  std::cout<< std::endl;
  outputSum();
}



void outputTxt(){
  std::ifstream file("io_file.txt");
  if (!file.is_open()){
    std::cout<< "file did not open" << std::endl;
  }
    char ch;
    while(file.get(ch)){
      std::cout<< ch;
    }

}




void outputNonWhiteSpace(){
  std::ifstream file("io_file.txt");
 if (!file.is_open()){
std::cout<< "file did not open" << std::endl;
  }
    char ch;
    while(file.get(ch)){

      if (ch == ' ')
	std::cout<< std::endl;
      

      if(ch != ' ')
    std::cout<< ch;


    }

    file.close();
}

void outputSum(){ std::ifstream file("io_file2.txt");
  if (!file.is_open()){
    std::cout<< "file did not open" << std::endl;
  }
  
  int i;
  int j;
  char ch;

  while( file >>j && file >> i ){
      
  
    
    std::cout<< i << " " << j << "=" << i+j << std::endl;
    file.get(ch);

  }
 
   file.close();


 

}

