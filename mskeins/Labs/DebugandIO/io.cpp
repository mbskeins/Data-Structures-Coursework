#include <iostream>
#include <fstream>
#include <string>


void getWord(std::istream &input, char str[]);
void getline(std::istream &input, char str[]);


int main(int argc, char* argv []){

  int x = argv[1][0] - '0';

  //  std::cout << x << std::endl;

  if(x != 1 && x != 2 && argc < 4){
  std::cout << "invalid arguement number (1 or 2)"<< std::endl;
  }

  if(x == 1){
    //std::cout<<"in getWord" << std::endl;
    std::ifstream input; 
    std::ofstream output;

    input.open(argv[2]);
    output.open(argv[3]);

    if(!input.is_open() || !output.is_open())
      std::cerr<<"files not good!"<<std::endl;

  int index = 0;
  char ch;
  char str [500];
  
     str[0] = '\0';
  
    int x = x;
     while(!input.eof()){
       //std::cout << std::endl;
       //std::cout << "running get word num: " << x << std::endl;
       getWord(input, str);
       
   
       x++;
       //outputting elemants from getWord
       for (int i =0; str[i] != '\0'; i++){
	 if (str[i] == '\n')x++; 
	 output << str[i];
	 //std::cout << str[i];
       }
       //std::cout << " ";
       output << " ";
     }

     output << std::endl;
  
     output<<"The number of words found are: " << x-1;
     // std::cout<<"The number of words found are: " << x-1;
     std::cout<< "Finished Getword Function" <<std::endl; 
 }
  else if (x == 2){
    
    std::ifstream input; 
    std::ofstream output;
    input.open(argv[2]);
    output.open(argv[3]);

    char str [500];

    int i = 0;
      str[i] = '\0';
    

        
      while(!input.eof()){

	//std::cout<< "running getline" << std::endl;

      getline(input, str);

      for (int i =0; str[i] != '\0'; i++){

	output << str[i];
      }
      output << std::endl;
    }

    std::cerr<<"Finished getline function "<<std::endl; 

  }


  return 0;
}


void getWord(std::istream &input, char str[]){
   if (input.fail())
      {
      std::cout << "Error" << std::endl;
      }  

    int i = 0; 
    input.get(str[i]);
    while(str[i]!= ' ' && !input.eof())
      { 
	//if(str[i] == '\n') break;
	++i;
	//if(str[i] == ' ')break;

	input.get(str[i]);
	//if(str[i]== '\n')break;
      }      
    str[i]='\0';
}
  
   

void getline(std::istream &input, char str[]){
    if (input.fail())
  {
    std::cout<<"Error: file is not open" << std::endl;
   }
   
  int i = 0;
  input.get(str[i]);
  while(str[i]!= '\n' && !input.eof())
    {
      //if(str[i] == '\n') break;
      ++i;
      //if(str[i] == ' ')break;

      input.get(str[i]);
      //if(str[i]== '\n')break;
    }
  str[i]='\0';

}
