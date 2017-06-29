#include<iostream>

using namespace std;

int main()
{
  int m, n, p;
  cout << "请输入要打印的行数：";
  cin >> n;
  cout << "请输入间隔空格的字符数：";
  cin >> m;
  p = 2 * n - 1;

  if(m < 0 || n < 0 || m > 12 || n > 20)
    {cout << "Data error!\n";
     return 1;}
  
  for(int i = 1; i <= n; ++i)
   { /*第i行开头输出n-i个空格*/
    for(int j = 1; j <= n - i; ++j)
      {cout << " ";}
    // 第i行输出2i-1个*
    for(int k = 1; k <= 2 * i - 1; ++k)
      {cout << "*";}
    // 输出m个空格
    for(int l = 1; l <= m; l++)
      {cout << " ";}
    //第i行输出2n-(2i-1)个*
    for(int y = 1; y <= 2 * ( n - i ) + 1; y++)
      {cout << "*";}
    cout << "\n";
   }
  return 0;
}
 
