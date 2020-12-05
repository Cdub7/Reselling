#include <iostream>
#include "final.h"
using namespace std;


Games::Games() {
	intIN = 1;
	intPIA = 1;
	dblPIC = 1;
	calcTotalCost();
}

Games::Games(int intItemNumber, int intPurchasedItemAmount, double dblPerItemCost)
{
	setItemNumber(intItemNumber);
	setQuantity(intPurchasedItemAmount);
	setItemCost(dblPerItemCost);
}

Games::~Games()
{

}

// validate and set data
void Games::setItemNumber(int n)
{
	while (!validItemNumber(n))
	{
		cout << "Item Number must be 1 or greater, but " << n << " was entered. Please re-enter: ";
		cin >> n;
	}
	intIN = n;
}

void Games::setQuantity(int n)
{
	while (!validQuantity(n))
	{
		cout << "Item quantity must be between 1 and 100,000, but " << n << " was entered. Please re-enter: ";
		cin >> n;
	}
	intPIA = n;
}

void Games::setItemCost(double n)
{
	while (!validItemCost(n))
	{
		cout << "Item cost must be between $0.01 and $100.00, but " << n << " was entered. Please re-enter: ";
		cin >> n;
	}
	dblPIC = n;
}

// Functions for returning variable results

int Games::getIdentity()
{
	return intIN;
}

int Games::getAmount()
{
	return intPIA;
}

double Games::getItemCost()
{
	return dblPIC;
}

// Function for calculating
double Games::calcTotalCost()
{
	return intPIA * dblPIC;
}

// Functions for error checking inputs
bool Games::validItemNumber(int n)
{
	if (n > 0)
		return true;
	else
		return false;
}

bool Games::validQuantity(int n)
{
	if (n > 0 && n < 100001)
		return true;
	else
		return false;
}

bool Games::validItemCost(double n)
{
	if (n >= 0.01 && n <= 100)
	{
		return true;
	}
	else
		return false;
}