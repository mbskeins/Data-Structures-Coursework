/**
 *Matt Skeins
 *Bigint project
 *CS 23001
 */


#ifndef CS23001_BIGINT_HPP
#define CS23001_BIGINT_HPP


#include <iostream>
#include <cstring>




const int SIZE = 200;

class bigint{

public:

  bigint();
  bigint(int);
  bigint(const char[]);
  

  bigint operator+(bigint); //addition two bigints
  bool operator==(const bigint&);
  int operator[](const int);
 
  friend std::ostream& operator<<(std::ostream&, bigint&);
  friend std::istream& operator>>(std::istream&, bigint&);

 void zeroize();
private:

  int digits[SIZE];

};

#endif
