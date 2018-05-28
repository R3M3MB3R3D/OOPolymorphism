#pragma once
//if not defined, define
#ifndef HEADER_H
#define HEADER_H

//create class
class character
{
//method of encapsulation
public:
	//constructors
	character();
	character(int health);

	//methods
	void setlevel(int level);
	int getlevel();

	void setHealth(int health);
	int getHealth();
	
	void printInfo();

protected:
	//attributes
	int p_level;
	int p_health;
	
private:
	//nothing because parent
};

class mage : public character
{
public:
	//constructors
	mage();
	mage(int health, int mana);

	//methods
	void setmana(int mana);
	int getmana();

	void printInfo();

	void printInfo(bool active);

protected:
	//dont need anything here, they wont be inherited

private:
	//attributes for mages only
	int p_mana;

};

class fighter : public character
{
public:
	//constructors
	fighter();
	fighter(int health, int stam);

	//methods
	void setstam(int stam);
	int getstam();

	void printInfo();
	void printInfo(bool active);

protected:
	//dont need anything here, they wont be inherited
private:
	//attributes for fighters only
	int p_stam;

};

#endif