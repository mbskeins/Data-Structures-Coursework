#ifndef STACK_HPP
#define STACK_HPP
#include "node.hpp"
#include "string/string.hpp"

template <typename T>
class Stack{
public:
  //default destructor, tos set to null
  Stack(): tos(0){};

  //copy constructor
  Stack(const Stack<T>&);

  //assignment operator overload
  Stack<T>& operator=(Stack<T>& rhs);

  //THE DESTRUCTOR :0
  ~Stack();

  //constant time swap
  void swap(Stack<T>& rhs);

  //checking is stack is empty
  bool isEmpty()const {return tos == 0;};

  //checking if full
  bool isFull()const;

  //removing top of stack
  T pop();

  //pushing new element to tos
  void push(const T&);

  //returns value at top of stack
  T top()const;

private:
  Node<T>* tos;
};


template <typename T>
Stack<T>::Stack(const Stack<T>& actual){

  //  std::cout << "copy ctor called" << std::endl;
  Node<T>* bottom;
  Node<T>* temp = actual.tos;

  tos = 0;

  while(temp != 0){
    if(tos == 0){
      tos = new Node<T>( temp-> data );
      bottom = tos;
    }
    else{
      bottom -> next = new Node<T>(temp -> data);
      bottom = bottom -> next;
    }
    temp = temp -> next;
  }

}

template <typename T>
Stack<T>::~Stack(){
  //std::cout << "DESCTRUCTOR CALLED" << std::endl;

  Node<T>* temp;
  while(tos != 0){
    temp = tos;
    tos = tos -> next;
    delete temp;
  }
}

template <typename T>
void Stack<T>::swap(Stack<T>& rhs){
  //  std::cout<< "inside swap" << std::endl;
  Node<T>* temp = tos;
  //std::cout<< "created node ptr" << std::endl;
  tos = rhs.tos;
  //std::cout << "value of tos: " << tos ->data << std::endl;

  //std::cout<< "set tos = rhs.tos" << std::endl;
  rhs.tos = temp;
  //std::cout << "swap finished" << std::endl;

}

template <typename T>
Stack<T>& Stack<T>::operator=(Stack<T>& rhs){
  //std::cout << "assignment op called" << std::endl;
  swap(rhs);
  //std::cout << "swap was succesful" << std::endl;
  return *this;

}

template <typename T>
T Stack<T>::top()const{
  return tos->data;
}

template <typename T>
bool Stack<T>::isFull()const{

  Node<T>* temp = new (std::nothrow) Node<T>;

  if(!temp){return true;}
  else{delete temp;}

  return false;
}

template <typename T>
T Stack<T>::pop(){

  T result = tos -> data;
  Node<T>* temp = tos;
  tos = tos -> next;

  delete temp;
  return result;
}

template <typename T>
void Stack<T>::push(const T& newItem){

  Node<T>* temp =new Node<T>(newItem);
  temp -> next = tos;
  tos = temp;

}

#endif
