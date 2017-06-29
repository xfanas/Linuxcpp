#include<iostream>
using namespace std;
void PrintWelcomeInfo();
unsigned int GetInterger();
unsigned int GetFactorial( unsigned int n );
int main()
{
  unsigned int n, result;
  PrintWelcomeInfo();
  n = GetInterger();
  result = GetFactorial( n );
  cout << n << "!=" << result << ".\n";
  return 0;
}
void PrintWelcomeInfo()
{
  cout << "The program gets a number and computes the factorial.\n";
}
unsigned int GetInterger()
{
  unsigned int t;
  cout << "Input a non-negative number: ";
  cin >> t;
  return t;
}
unsigned int GetFactorial(unsigned int n)
{
  unsigned int result;
  if( n == 0 )
    result = 1;
  else
    result = n * GetFactorial( n-1 );
  return result;
}

