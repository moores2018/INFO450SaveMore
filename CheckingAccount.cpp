#include "stdafx.h"
#include <iostream> 
using namespace std;

class Checking : public Account

Checking(int number, double balance) : Account(number, balance)
{
}

int Withdrawal(double amount)
{
	int call1 = Account::Withdrawal(amount);
	if (call1 != 0)
		return call1;

	if (_balance < 500)
		return Account::Withdrawal(5);

	return 0;
}

int getChecks()
{
	return Account::Withdrawal(15);
}

};