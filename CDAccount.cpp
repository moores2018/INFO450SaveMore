#include "stdafx.h"
#include <iostream> 
using namespace std;

class CD : public Account

CD(int number, double balance, int term) : Account(number, balance)
{
	_term = term;
}

int AssessInterest()
{
	if (_term >= 10)
		return Account::Deposit(_balance*0.10);
	else
		return Account::Deposit(_balance*0.05);
}

void display()
{
	std::cout << "term: " << _term << " ";
	Account::display();
}


};