// INFO450SaveMore.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Account 
{
protected:
	int _number;
	double _balance;

public:
	Account(int number, double balance)
	{
		_number = number;
		_balance = balance;
	}

	int Deposit(double amount)
	{
		_balance += amount;
		return 0;
	}

	virtual int Withdrawal(double amount)

	{
		if (amount > _balance)
			return -1;

		_balance -= amount;
		return 0;
	}

	virtual void display()
	{
		std::cout << "number: " << _number << "; balance: " << _balance << std::endl;
	}
};
class Savings : public Account {
public:
	Savings(int number, double balance) : Account(number, balance)
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
class Checking : public Account {
public:
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
class CD : public Account {
private:
	int _term;

public:
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

// To execute C++, please define "int main()"
int main() {

	Savings s(1, 3000);
	Checking c(1, 1000);
	CD cd(2, 7000, 10);

	s.AssessInterest();
	cd.AssessInterest();

	c.getChecks();

	s.Withdrawal(100);
	c.Withdrawal(200);
	cd.Withdrawal(500);

	c.display();
	s.display();
	cd.display();



	return 0;
}
