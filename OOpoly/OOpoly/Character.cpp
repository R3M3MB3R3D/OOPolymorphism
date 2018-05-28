#include "stdafx.h"
#include "iostream"
#include "string"
#include "iostream"
#include "Character.h"

using namespace std;

character :: character()
{
	//nothing here
}
character :: character(int health)
{
	//setting attributes
	p_health = health;
}
void character :: setHealth(int health)
{
	//setting attribue health
	p_health = health;
}
int character :: getHealth() 
{
	//returning health
	return p_health;
}
void character::setlevel(int level)
{
	//setting attribute level
	p_level = level;
}
int character::getlevel()
{
	//returning level
	return p_level;
}
void character :: printInfo() 
{
	//displying information
	cout << "Current Level is:" << p_level << " .\n";
	cout << "Current Health is: " << p_health << " .\n";
}

mage :: mage()
{
	//default constructor
}
mage :: mage(int health, int mana)
{
	p_health = health;
	p_mana = mana;
}
void mage :: setmana(int mana)
{
	p_mana = mana;
}
int mage :: getmana()
{
	return p_mana;
}
void mage :: printInfo()
{
	//overwrites the very same printInfo function for character, so without saying "print health" would not have printed health
	cout << "Current Mana is: " << p_mana << " .\n";
}
void mage::printInfo(bool active)
{
	if (active)
	{
		//printing data from parent class
		character::printInfo();
		cout << "Current Mana is " << p_mana << " .\n";
	}
}

fighter :: fighter()
{
	//default constructor
}
fighter :: fighter(int health, int stam)
{
	p_health = health;
	p_stam = stam;
}
void fighter :: setstam(int stam)
{
	p_stam = stam;
}
int fighter :: getstam()
{
	return p_stam;
}
void fighter :: printInfo()
{
	cout << "Current Stamina is: " << p_stam << " .\n";
}
void fighter::printInfo(bool active)
{
	if (active)
	{
		character::printInfo();
		cout << "Current Mana is " << p_stam << " .\n";
	}
}