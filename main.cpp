// Programmer: Cory Walton



#include <iostream>
#include <iomanip>
#include "final.h"
using namespace std;

int main()
{
	// create object1
	Games games1;

	cout << "Object 1:" << fixed << showpoint << setprecision(2) << endl;
	cout << "       Item  #: " << left << setw(6) << games1.getIdentity() << endl;
	cout << "       Quan:    " << setw(6) << games1.getAmount() << endl;
	cout << "       Cost  $: " << setw(6) << games1.getItemCost() << endl;
	cout << "       Total $: " << setw(6) << games1.calcTotalCost() << endl;
	system("pause");
	system("cls");

	//Scenario A for object2
	Games games2(1234, 100000, 100);
	cout << "Object 2:" << endl;
	cout << "       SCENARIO A" << endl;
	cout << "       Item  #: " << setw(6) << games2.getIdentity() << endl;
	cout << "       Quan:    " << setw(6) << games2.getAmount() << endl;
	cout << "       Cost  $: " << setw(6) << games2.getItemCost() << endl;
	cout << "       Total $: " << setw(6) << games2.calcTotalCost() << endl << endl;
	
	cout << "Next Scenario:" << endl << endl;

	// Scenario B for object2
	games2(0, 0, 90);
	cout << "       SCENARIO B" << endl;
	cout << "       Item  #: " << setw(6) << games2.getIdentity() << endl;
	cout << "       Quan:    " << setw(6) << games2.getAmount() << endl;
	cout << "       Cost  $: " << setw(6) << games2.getItemCost() << endl;
	cout << "       Total $: " << setw(6) << games2.calcTotalCost() << endl << endl;

	cout << "Next Scenario:" << endl << endl;
	//Scenario C for object2
	games2.setItemNumber(9876);
	games2.setQuantity(100000);
	games2.setItemCost(0);
	cout << "       SCENARIO C" << endl;
	cout << "       Item  #: " << setw(6) << games2.getIdentity() << endl;
	cout << "       Quan:    " << setw(6) << games2.getAmount() << endl;
	cout << "       Cost  $: " << setw(6) << games2.getItemCost() << endl;
	cout << "       Total $: " << setw(6) << games2.calcTotalCost() << endl;

	system("pause");
	system("cls");

	// Create object3
	Games games3(1000, 100000, 100);
	cout << "Object 3:" << endl;
	cout << "       Item #:  " << setw(6) << games3.getIdentity() << endl;
	cout << "       Quan:    " << setw(6) << games3.getAmount() << endl;
	cout << "       Cost $:  " << setw(6) << games3.getItemCost() << endl;
	cout << "       Total $: " << setw(6) << games3.calcTotalCost() << endl;

	system("pause");
	games1.~Games();
	games2.~Games();
	games3.~Games();
	return 0;

}