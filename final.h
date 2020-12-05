// final.h

#ifndef FINAL_H
#define FINAL_H
#endif

class Games
{

private:
	int intIN, intPIA;
	double dblPIC;

public:
	
	~Games();

	Games();
	Games(int, int, double);

	// Set members will assign public attributes to the private attributes
	// and check for valid data

	void setItemNumber(int);
	void setQuantity(int);
	void setItemCost(double);

	// Get members
	int getIdentity();
	int getAmount();
	double getItemCost();

	// used to check errors for data input
	bool validItemNumber(int);
	bool validQuantity(int);
	bool validItemCost(double);

	// Used for calculating
	double calcTotalCost();

};
