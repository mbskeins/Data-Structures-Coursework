#ifndef MINIBIGINT_HPP
#define MINIBIGINT_HPP

class minibigint{

public:
  minibigint();
  minibigint(int);

  bool operator==(const minibigint&);

private:
  int num;

};

#endif
