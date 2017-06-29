#include<iostream>

using namespace std;

void Welcome();
int GetInterger(int idx);
int Add(int x, int y);
void PrintInterger(int x);

int main()
{
  int a, b, sum;
  Welcome();
  a = GetInterger(1);
  b = GetInterger(2);
  sum = Add(a, b);
  PrintInterger(sum);
  return 0;
}

void Welcome()
{
  cout << "此函数获取两个整数，并求出二者之和。\n";
}

int GetInterger(int idx)
{
  int t;
  cout << "No." << idx << ":";
  cin >> t;
  return t;
}

int Add(int x, int y)
{
  return x + y;
}

void PrintInterger(int x)
{
  cout << "The sum is " << x << "." << endl;
}
