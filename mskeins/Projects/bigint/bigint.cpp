/**

 * Matt Skeins
 * bigint project part 1
 * cs 23001
 */



#include "bigint.hpp"

void bigint::zeroize(){
  int i = 0;
  while ( i < SIZE ){
    digits[i] = 0;
    i++;
  }
}

bigint::bigint(){

  zeroize();

}


bigint::bigint(int x){
  zeroize();
 
  int i = 0;
 while( x!= 0){
    digits[i]= x % 10;
    x /= 10;
    i++;
  }
}


bigint::bigint(const char str[]){
  zeroize();

  int i = 0;
  int  x = (strlen(str)-1);
  while ( str[i] != '\0') {
    digits[x] = int(str[i]) - int('0');
    i++;
    x--;
  }
}


std::ostream& operator<<(std::ostream& output, bigint& str){
  
  int x = SIZE-1;
  int i = 0;
  // loop while this index == 0 
  while (str.digits[x]== 0){x--;} 

  do {

    //makes sure 50 characters per line
    if ( i % 50 != 0){
      output << str.digits[x];
    }
    else{
      output << std::endl << str.digits[x];
    }
    --x;
    ++i;    
  } while( x>= 0);
 
    return output;
}

bool bigint::operator==(const bigint& str){

  int i = 0;
  while (i<SIZE){
    if(str.digits[i] != digits[i]){
      return false;
    }
    i++;
  }
  return true;
}

bigint bigint::operator+(bigint rhs){

  int i = 0;
  int tmp = 0;
  int  tmp2 = 0;

  while( i < SIZE){

    tmp = rhs.digits[i] + digits[i] + tmp;
    tmp2 = tmp % 10;
    tmp /= 10;
    rhs.digits[i] = tmp2;
    i++;
  }

  return rhs;
}


std::istream& operator>>(std::istream& in, bigint& rhs){

  int i = 0;
  char input, tmp[SIZE];

  in >> input;

  //checking for semicolon or end of file
  while (input != ';' && !in.eof()){
    tmp[i] = input;
    in >> input;
    i++;
}

  tmp[i] = 0;
  rhs = bigint(tmp);


  return in;
}

int bigint::operator[](const int index){
  
  return digits[index];

}
