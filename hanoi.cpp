#include<iostream>
using namespace std;
typedef enum{X, Y, Z} HANOI;
void PrintWelcomeInfo();
unsigned int GetInterger();
void MoveHanoi( unsigned int n, HANOI from, HANOI tmp, HANOI to );
char ConvertHanoitoChar( HANOI x );
void MovePlate( unsigned int n, HANOI from, HANOI to );
int main()
{
  unsigned n;
  PrintWelcomeInfo();
  n = GetInterger();
  MoveHanoi( n, X, Y, Z);
  return 0;
}
void PrintWelcomeInfo()
{
  cout << "This program shows the moving process of Hanoi Tower.\n";
}
unsigned int GetInterger()
{
  unsigned int t;
  cout << "Input numbers of plates: ";
  cin >> t;
  return t;
}
char ConvertHanoiToChar( HANOI x )
{
  switch( x )
  {
    case X: return 'X';
    case Y: return 'Y';
    case Z: return 'Z';
    default: return '\0';
  }
}
void MovePlate( unsigned int n, HANOI from, HANOI to)
{
  char fc, tc;
  fc = ConvertHanoiToChar( from );
  tc = ConvertHanoiToChar( to );
  cout << n << ":" << fc << "-->" << tc	<< endl;
}
void MoveHanoi( unsigned int n, HANOI from, HANOI tmp, HANOI to)
{
  if( n == 1 )
    MovePlate( n, from, to);
  else
    {
      MoveHanoi( n-1, from, to, tmp );
      MovePlate( n ,from, to);
      MoveHanoi( n-1, tmp, from, to );
    }
}
