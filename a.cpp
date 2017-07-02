#include "a.h"

A::A( const A & that )
{
  this -> _n = that._n;
  _p = new int[_n];
  for( int i = 0; i < _n; i++ )
    _p[ i ] = that._p[ i ];
}

A & A::operator=( const A & that )
{
  this -> _n = that._n;
  if( _p )
    delete[] _p;
  _p = new int[_n];
  for( int i = 0; i < _n; i++ )
    _p[i] = that._p[i];
  return *this;
}

int & A::operator[]( int i )
{
  if( i < 0 || i >= 4 )
    throw std::out_of_range("Out of range when trying to access the object...");
  return _p[i];
}

const int & A::operator[]( int i ) const
{ 
  if( i < 0 || i >= 4 )
    throw std::out_of_range("Out of range when trying to access the object...");
  return _p[i];
}

  
