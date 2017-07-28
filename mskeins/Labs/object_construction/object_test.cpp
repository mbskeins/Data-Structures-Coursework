/*
 *Matt Skeins
 *Lab 5
 *CS 23001
*/



#include "object_constructor.hpp"




int main(){

  Object* myObject = new Object;
  Object a;
  Object b = a;
    b=a;

    delete myObject;

  return 0;
}
