#include "virtual.h"

void Account::PrintBalance() const
{
   cerr << "Error. Balance not available for base type." << endl;
}

void CheckingAccount::PrintBalance() const
{
  cout << "Checking account balance: " << GetBalance() << endl;
}

void SavingsAccount::PrintBalance() const
{
  cout << "Savings account balance: " << GetBalance() << endl;
}
