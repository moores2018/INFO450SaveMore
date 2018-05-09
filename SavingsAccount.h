#pragma once
#include "stdafx.h"
#include <iostream>

using namespace std;

class Savings 
{
protected:
	int _number;
	double _balance;
public:
	Savings();
	int Withdrawal();
	int AssessInterest();
};