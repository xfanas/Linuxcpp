#include <iostream>
using namespace std;

class Account
{
public:
  Account( double d ) : _balance(d) { }
  double GetBalance() const;
  virtual void PrintBalance() const;
private:
    double _balance;
};

inline double Account::GetBalance() const
{
  return _balance;
}

class CheckingAccount : public Account
{
public:
   CheckingAccount(double d) : Account(d) { }
   void PrintBalance() const;
};

class SavingsAccount : public Account
{
public:
   SavingsAccount(double d) : Account(d) { }
   void PrintBalance() const;
};
