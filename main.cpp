#include "a.h"

int main()
{
  A a(4), b;
  for( int i = 0; i < 4; i ++ )
    a[i] = i + 1;
  std::cout << "Before object assignment:" << std::endl;
  for( int i = 0; i < 4; i ++ )
    std::cout << a[ i ] << " ";
  std::cout << std::endl;
  b = a;
  std::cout << "After object assignment:" << std::endl;
  for( int i = 0; i < 4; i++ )
    std::cout << b[ i ] << " ";
  std::cout << std::endl;
  return 0;
}
