#pragma once
#include "stdafx.h"
#include <iostream>

using namespace std;

class CD
{
protected:
	int _number;
	double _balance;
public:
	CD();
	int AssessInterest();
	void display();
};
