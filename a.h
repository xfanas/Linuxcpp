#include <iostream>

using namespace std;

class A
{
public:
  A() : _n(0), _p(NULL) {}
  explicit A(int n):_n(n),_p(new int[n]) {}
  A( int n, int *p ) : _n(n), _p(p) {}
  A(const A & that);
  A & operator=( const A & that );
  virtual ~A() { if(_p){ delete[] _p, _p = NULL; }}
public:
  int & operator[]( int i );
  const int & operator[]( int i ) const;
private:
  int _n;
  int * _p;
};
