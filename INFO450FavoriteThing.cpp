// INFO450FavoriteThing.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "InventoryItem.h"


InventoryItem::InventoryItem()
{
	itemSpeed = " ";
	itemLogo = " ";
	speed = 0;
	price = 0;
	zerotosixty = 0;
	wheelsize = 0;
	qty = 0;
}

InventoryItem::~InventoryItem()
{
}

int InventoryItem::getInventoryItem()
{
	cout << " ********* Welcome to My Favorite Item Tracker! ********** " << endl;
	cout << " My favorite item is my dream car, the Lamborghini Veneno! " << endl;
	cout << " ***** The Lamborghini Veneno originates from Italy. ***** " << endl;
	cout << " *** Take a guess at some of the features of the car! **** " << endl;
// can't figure out why cout statement won't update 


	cout << "Logo? ";
	getline(cin, itemLogo);
	cout << "Price? ";
	cin >> price;
	cout << "Top Speed (in mph)?";
	getline(cin, itemSpeed);
	cin >> speed;
	cout << " 0-60 MPH time (in seconds)? ";
	cin >> zerotosixty;
	cout << " Wheel Size (in inches)? "; endl;
	cin >> wheelsize;

	return 0;
}
	
	if (!cin.good())
	{
		cout << "failure to read input." << endl;
		cin.clear();
		cin.ignore(256, '\n');
		return ERROR1;
	}
	

int InventoryItem::addInventory(int num)
{
	if (num < 0)
		return ERROR1;
	qty += num;
	return 0;
}



ostream & operator<<(ostream &os, const InventoryItem &item)
{
	os << "**** My favorite Item: The Lamborghini Veneno ****" << endl;
	os << " Logo: Taurus Bull " << endl;
	os << " Price: $4.5 Million " << endl;
	os << " Top Speed: 221 MPH " << endl;
	os << " 0-60 Time: 2.9 seconds "  << endl;
	os << " Wheel Size: 20 inches " << endl;
	return os;
}
