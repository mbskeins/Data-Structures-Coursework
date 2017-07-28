#include "string.hpp"
#include <iostream>


String::String(){
  s = new char [DEFAULT_STRING_CAPACITY];
  s[0] = '\0';
  Capacity = DEFAULT_STRING_CAPACITY;
}

String::String(char x){
  Capacity = DEFAULT_STRING_CAPACITY;
  s = new char [Capacity];

  int i = 0;
  s[i] = x;
  i++;
  s[i] = '\0';

}

String::String(const char *x){
  int i = 0;
  Capacity = DEFAULT_STRING_CAPACITY;
  s = new char [Capacity];
  while(x[i] != 0){
    s[i] = x[i];
    i++;
    if( i >= Capacity - 1) break;
  }
  s[i] = 0;
}

String::String(const String& rhs){

  int i = 0;
  Capacity = rhs.Capacity;
  s = new char [Capacity];
  
  // std::cout << "test Capacity : " << Capacity << std::endl;

  while(rhs.s[i] != '\0'){
    //std::cout << "index value: " << i <<  std::endl;
    s[i] = rhs.s[i];
    //   std::cout << "array s: " << s << std::endl;
      i++;
      if(i >= Capacity) break;
  }
  s[i] = 0;

}

String::String(int cap, const char* other){

  if(cap <= 0){
    Capacity = DEFAULT_STRING_CAPACITY;
  }
  else{
    Capacity = cap;
  }
  
  
  s = new char[DEFAULT_STRING_CAPACITY];
  int i = 0;
  while(other[i] != 0){
    s[i] = other[i];
    i++;
    if(i >= Capacity - 1) break;
  }
  s[i] = 0;
}

String::~String(){

  delete [] s;

}


String::String(int cap){
  Capacity = cap;
  s = new char [Capacity];
  s[0] = '\0';
}



bool String::operator == (const String& other)const{
  int i = 0;
  while (s[i] != '\0' && other.s[i] != '\0'){
    if(s[i] != other.s[i]){
      return false;
    }
    i++;
  }
  return (s[i] == other.s[i]);
}

void String::swap(String & other){

  char* tmp = s;
  s = other.s;
  other.s = tmp;

  int tmpcap = Capacity;
  Capacity = other.Capacity;
  other.Capacity = tmpcap;

}

String& String::operator=(String rhs){

  swap(rhs);

  return *this;

}

//needed this to convert string to int
int String::convertInt(){
  int index = length() - 1;
  
  if(s[index] == '-'){
    return 0;
  }

  int result = 0;
  int tenPlace = 1;

  for(int i = index; i >= 0; --i){
    result = result + (int(s[i] - int('0')) * tenPlace);
      tenPlace *= 10;
  }

  return result;
}

void String::resetCapacity(int cap){

  String tmp(cap, s);
  swap(tmp);

}

String String::getline(std::istream& in){

  String line;
  char ch = '\0';
    
    for(int i = (in.get(ch), 0); (ch != '\n') && (!in.fail()); ++i, in.get(ch)){

      if(i == (line.length() - 1)){
	  line.resetCapacity(line.length() * 2);
	}

	line = line +  ch;
    }
      return line;
}

int String::capacity() const{

  return Capacity;

}

int String::length() const{

  int i = 0;
  while (s[i] != '\0'){
    ++i;
  }
  return i;
}

char& String::operator[](int index){
  return s[index];
}


char String::operator[](int index)const{
  return s[index];
}

String String::operator+(const String& rhs)const{
 


 
  int newCapacity = length() + rhs.length()+1;

  if(newCapacity < DEFAULT_STRING_CAPACITY){
    newCapacity = DEFAULT_STRING_CAPACITY;
  }else{
    newCapacity += DEFAULT_STRING_CAPACITY;
  }

  String result(newCapacity, s);
  int i = 0;
  while(rhs[i] != '\0'){
    result[length() + i] = rhs[i];
    ++i;
  }

  result[length() + i] = '\0';
  return result;
  
}

String operator+(const char lhs[], const String& rhs){

  return String(lhs) + rhs;

}

String operator+(const char lhs, const String& rhs){

  return String(lhs) + rhs;

}

String operator+(const String& rhs, const char lhs[]){

  return String(lhs) + rhs;

}

String operator+(const String& rhs, const char lhs){

  return String(lhs) + rhs;

}

std::ostream& operator<<(std::ostream& out, const String& rhs){

  for(int index = 0; index < rhs.length(); ++index){
    if(rhs[index] == ' '){std::cout << std::endl;}
    else{
    out << rhs[index];
    }
  }
  return out;
}

std::istream& operator>>(std::istream& in, String& rhs){

  char* tmp = new char[rhs.capacity()];

  if(!in.eof()){
    in >> tmp;
  }
  else{
    tmp[0] = '\0';
  }

  rhs = String(tmp);
  return in;

}

bool String::operator<(const String& rhs)const{

  int index = 0;
  while (s[index] != '\0' && rhs[index] != '\0' && s[index] == rhs[index]){
    ++index;
  }
  return s[index] < rhs[index];

}

bool operator<(const char lhs[],const String& rhs){

  return (String(lhs) < rhs);
}

bool operator<(const char lhs,const String& rhs){

  return (String(lhs) < rhs);
}

bool operator<=(const char lhs[], const String& rhs){

  return(String(lhs) == rhs || String(lhs) < rhs);
}

bool operator!=(const char lhs[], const String& rhs){

  return!(String(lhs) == rhs);
}

bool operator>(const char lhs[], const String& rhs){

  return!(lhs <= rhs);
}


bool operator>=(const char lhs[], const String& rhs){

  return!(String(lhs) < rhs);
}

String String::substr(int start, int end) const{

  if(start < 0){ start = 0;}
  if(end >= length()){end = length() - 1;}

  String result(Capacity);

  for(int index = start; index <= end; index++){
    result[index-start] = s[index];
  }

  result[end - start+1] = '\0';
  return result;
}

int String::findChar(char ch, int pos)const{
  if(pos < 0 || pos > length()){return -1;}

  for(int index = pos; index <= length(); ++index){
    if(s[index] == ch){return index;}
  }

  return -1;
}

int String::findSubstr( const String& needle, int pos)const{

  if(pos < 0 || pos > length()){return -1;}

  for (int index = pos; index <= length() - needle.length(); index++){
    String tmp= substr(index, needle.length() - 1);

    if(tmp == needle){return index;}
  }
  return -1;
}

std::vector<String> String::split(){

  std::vector<String> result;
  
  for(int i = 0; s[i] != '\0'; ++i){
    result.push_back(s[i]);
  }

  return result;
}


std::vector<String> String::split(const char ch){
  //std::cout << "starting vector constructor" << std::endl;

  std::vector<String> result;
  String temp;
  int x = 0;

  //std::cout << "before for loop" << std::endl;


  for(int i = 0; s[i] != '\0'; ++i){
    //std::cout << "starting for loop" << std::endl;
    if(s[i] != ch){   
      temp[x] = s[i];
      //  std::cout << temp[x] << " : value of split" << std::endl;
      ++x;
    }
    else{
      temp[x] = '\0';
      result.push_back(temp);
      x = 0;
    }
  }
  temp[x] = '\0';

  //  std::cout << "ending vector split" << std::endl;

  return (result.push_back(temp), result);
}
