#include "minibigint.hpp"

minibigint::minibigint(){
  num = 0;
}


minibigint::minibigint(int n){
  num = n;
}


bool minibigint::operator==(const minibigint & other){
  return (num == other.num);
}
