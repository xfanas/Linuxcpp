#include<iostream>

using namespace std;

int main()
{
  int x = 0;
  cout << "请输入一个整数： ";
  cin >> x;
  if (x % 2 != 0)
    x = x * 3 + 1;
  else
    x /= 2;
  cout << "结果为：" << x << endl;
  return 0;
}
  
