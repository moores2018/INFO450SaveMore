#include "stdafx.h"
#include <iostream> 
using namespace std;

class Savings : public Account


Savings (int number, double balance) : Account(number, balance)
{
}

int Withdrawal(double amount)
{
	return Account::Withdrawal(amount + 2);
}


int AssessInterest()
{
	if (_balance <= 10000)
		return Account::Deposit(_balance*0.01);
	else
		return Account::Deposit(_balance*0.02);
}
};