#include "couple.h"

Couple & Couple::operator=( const Couple & c )
{
  _a = c._a, _b = c._b;
  return *this;
}

Couple & Couple::operator+=( const Couple & c )
{
  _a += c._a, _b += c._b;
  return *this;
}

Couple & Couple::operator*=( const Couple & c )
{
  _a *= c._a, _b *= c._b;
  return *this;
}

Couple & Couple::operator*=( const int & k )
{
  _a *= k, _b *= k;
}

Couple & Couple::operator++()
{
  ++_a, ++_b;
  return *this;
}

Couple Couple::operator++( int )
{
  Couple _t( *this );
  _a++, _b++;
  return _t;
}

