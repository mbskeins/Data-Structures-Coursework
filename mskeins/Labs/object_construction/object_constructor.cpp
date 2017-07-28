#include "object_constructor.hpp"


Object::Object(){

  //  str = new char[SIZE];
  //str[0] = '\0';

  std::cout << "Default Constructor Called" << std::endl;


}


Object::Object ( const Object& rhs){

  std::cout << "copy constructor called" << std::endl;
}

Object::~Object(){



  std::cout<< "destructor called" << std::endl;

}

Object& Object::operator=(Object rhs){


  std::cout << "assignment operator called" << std::endl;
  return *this;
}

void Object::swap(Object& other){

 

}
