//create a base class of a character, and 2 additional classes that inherit attributes from the base
//create 2 attributes for base class, and 2 additional attributes per additional class
//create a method to access and update attributes for each class
//create 2 constructors for each class
//create a print info method that prints attributes for each class
//create a way to verify attributes as valid values for each class

#include "stdafx.h"
#include "iostream"
#include "string"
#include "Character.h"
#include "iostream"

using namespace std;

int main()
{
	character char1;  //default constructor
	char1.setlevel(1); //calls set function and sets value to 1
	char1.setHealth(20); //calls set function and sets value to 20
	char1.printInfo(); //calls printinfo function

	mage mag1;
	mag1.setmana(20);
	mag1.printInfo();
	mag1.printInfo(false);

	mage mag2;
	mag2 = mage(30, 20);
	mag2.printInfo(true);


	fighter fight1;
	fight1.setstam(20);
	fight1.printInfo();
	fight1.printInfo(true);

	system("pause");
	return 0;
}
