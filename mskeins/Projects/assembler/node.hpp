#ifndef NODE_HPP
#define NODE_HPP

#include <iostream>
#include <cassert>

template <typename T>
class Node{
public:

  //default constructor
  Node(): next(0){};

  //Data constructor
  Node(const T& item): data(item), next(0) {};

  //data attribute
  T data;

  //pointer to next element
  Node <T> *next;

};

#endif
