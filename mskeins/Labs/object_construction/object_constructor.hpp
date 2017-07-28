#include <iostream>

const int SIZE = 100;

class Object{

public:
  Object();  
  Object(const Object&);
  ~Object();
  Object& operator=(Object);
  void swap(Object&);  

private:
  char* str;
  int capacity;
};
