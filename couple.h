#include <iostream>

using namespace std;

class Couple
{
public:
  Couple( int  a = 0, int b = 0 ) : _a( a ), _b( b ){ } 
  Couple( const Couple & c ): _a( c._a ), _b( c._b ){ }
  Couple & operator=( const Couple & c );
  Couple & operator+=( const Couple & c );
  Couple & operator*=( const Couple & c );
  Couple & operator*=( const int & k );
  Couple & operator++(); // 前缀递增
  Couple operator++(int); // 后缀递增
  void Print() { cout << this -> _a << ", " << this -> _b << endl; }
private:
  int _a, _b;
};
