#include<iostream>

using namespace std;

int main()
{
  int a = 0;
  int sum = 0;
  for( int i=0; i<10; i++)
    {
      cout << "input num: ";
      cin >> a;
      sum += a;
      
    }
  cout << "The sum of 10 numbers is " << sum << endl;
  return 0;
}
