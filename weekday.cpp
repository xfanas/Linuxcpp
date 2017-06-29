#include<iostream>
#include<iomanip>

using namespace std;

typedef enum {SUN, MON, TUE, WED, THU, FRI, SAT} WEEKDAY;
int main()
{
  int date;
  const WEEKDAY date_1 = FRI;
  WEEKDAY weekday;
  // 输入部分
  cout << "The program getsa date(1-31), \n";
  cout << " and prints a calendar of 2006-12 (just the date).\n";
  cout << "The date:";
  cin >> date;
  if (date < 1 || date > 31) 
    {
     // 数据的有效性检查
     cout << "Date Error!\n";
     return 1; 
    }
  weekday = (WEEKDAY)((date + (int)date_1 - 1) % 7);
  cout << "Calendar 2006-12\n";
  cout << "--------------------------\n";
  cout << "Su  Mo  Tu  We  Th  Fr  Sa\n";
  cout << "--------------------------\n";
  if(weekday == SUN)         cout << setw(2) << date;
  else if(weekday == MON)    cout << setw(6) << date;
  else if(weekday == TUE)    cout << setw(10) << date;
  else if(weekday == WED)    cout << setw(14) << date;
  else if(weekday == THU)    cout << setw(18) << date;
  else if(weekday == FRI)    cout << setw(22) << date;
  else                       cout << setw(26) << date;
  cout << endl << "--------------------------\n";
  return 0;
}
