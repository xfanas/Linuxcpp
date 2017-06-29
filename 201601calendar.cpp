#include<iostream>
#include<iomanip>

using namespace std;

typedef enum {SUN, MON, TUE, WED, THU, FRI, SAT} WEEKDAY;
int main()
{
  int date;
  const WEEKDAY date_1 = FRI;
  WEEKDAY weekday;
  cout << "The program shows calendar in 2016-01. \n";
  cout << "Calendar 2016-01\n";
  cout << "--------------------------\n";
  cout << "Su  Mo  Tu  We  Th  Fr  Sa\n";
  cout << "--------------------------\n";
  for(date = 1; date <= 31; date++)
   { weekday = (WEEKDAY)((date + (int)date_1 - 1) % 7);
    if(weekday == SAT)         cout << setw(4) << date << endl;
    else                       cout << setw(4) << date;
   }
  cout << endl << "--------------------------\n";
  return 0;
}
