#include<iostream>

using namespace std;
bool IsPrime(int x);

int main()
{
  bool f;
  int r;
  cout << "Please input a number:";
  cin >> r;
  f = IsPrime(r);
  cout << f << endl;
  return 0;
}

bool IsPrime(int x)
{
  if(x <= 1)
    return false;
  else 
    for(int i = 2; i < x; i++)
      {
        if(x % i == 0)
          { return false; }
      }
    return true;
}

