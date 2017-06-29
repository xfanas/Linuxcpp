#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
  int i;
  srand((int)time(0));
  for( i = 0; i < 5; i++ )
    cout << rand() << ";";
  cout << endl;
  return 0;
}
