#pragma once
#include "stdafx.h"
#include <iostream>

using namespace std;

class Checking
{
protected:
	int _number;
	double _balance;
public:
	Checking();
	int Withdrawal();
};
