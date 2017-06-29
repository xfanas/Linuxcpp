#include<iostream>
#include<iomanip>


using namespace std;

int main()
{
  double principal = 0;
  double interest_rate = 0;
  double interest = 0;
  double money = 0;

  cout << "请输入本金：";
  cin >> principal;

  cout << "请输入利率百分比（%）： ";
  cin >> interest_rate;
  interest_rate /= 100;

  interest = principal * interest_rate;
  money = principal + interest;
  
  cout.setf(ios::fixed);
  cout << "一年后的本息之和为： " << setprecision(2) << money << endl;
  cout.unsetf(ios::fixed);
  
  return 0;
}
  
  
  
