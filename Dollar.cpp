#include <iostream>
#include <string>
#include "Dollar.h"
#include <fstream>
#include <istream>
// setters
void Dollar::setBill(std::string d)
{
	dollar = d;
}

void Dollar::setCoin(std::string c)
{
	cent = c;
}


int Dollar::addWholeNumber(Currency& obj)
{
	Dollar temp;
	Dollar& currency_ref = dynamic_cast<Dollar&>(obj); // downcast reference

	temp.dValue = dValue + currency_ref.dValue; // do the thing

	return temp.dValue; // return the thing 
}

int Dollar::addRemainder(Currency& obj)
{
	Dollar temp;
	Dollar& currency_ref = dynamic_cast<Dollar&>(obj); // downcast reference

	temp.cValue = cValue + currency_ref.cValue; // do the thing

	return temp.cValue; // return the thing 

}

int Dollar::subWholeNumber(Currency& obj)
{
	Dollar temp;
	Dollar& currency_ref = dynamic_cast<Dollar&>(obj); // downcast reference

	temp.dValue = dValue - currency_ref.dValue; // do the thing

	return temp.dValue; // return the thing
}

int Dollar::subRemainder(Currency& obj)
{
	Dollar temp;
	Dollar& currency_ref = dynamic_cast<Dollar&>(obj); // downcast reference

	temp.cValue = cValue - currency_ref.cValue; // do the thing

	return temp.cValue; // return the thing 
}

// operator overloads!
Dollar Dollar::operator+(Dollar& obj)
{
	Dollar temp;

	temp.dValue = dValue + temp.addWholeNumber(dynamic_cast<Dollar&>(obj)); // add your dollars together
	temp.cValue = cValue + temp.addRemainder(dynamic_cast<Dollar&>(obj)); // add your cents together

	if (temp.cValue > 100) // if you have over 100 cents do some stuff to convert that into dollars
	{
		temp.dValue = temp.dValue + (temp.cValue / 100); // divide the cent value by 100 and add it to your dollars
		temp.cValue = temp.cValue % 100; // take the mod of cValue and set it to cents

		return temp;
	}

	return temp;
}

Dollar Dollar::operator-(Dollar& obj)
{
	Dollar temp;

	temp.dValue = dValue - temp.addWholeNumber(dynamic_cast<Dollar&>(obj)); // add your dollars together
	temp.cValue = cValue - temp.addRemainder(dynamic_cast<Dollar&>(obj)); // add your cents together

	if (temp.cValue < 0) // if you have less 0 cents do some stuff to convert that into dollars
	{
		temp.dValue--; // decrement a dollar 
		temp.cValue = temp.cValue * -1; // get your cents to a positve value

		return temp;
	}


	return temp;
}

bool Dollar::operator>(const Dollar& obj) 
{
	if (dValue > obj.dValue) // if the dollar > the dollar objects dValue then return true
	{
		return true;
	}
	else if ((dValue == obj.dValue) && (cValue >= obj.cValue)) // check the cents value
	{
		return true;
	}
	else // else return false!!
	{
		return false;
	}
}

bool Dollar::operator<(const Dollar& obj) // defined for later use
{
	if (dValue < obj.dValue) // if the dollar > the dollar objects dValue then return true
	{
		return true;
	}
	else if ((dValue == obj.dValue) && (cValue <= obj.cValue)) // check the cents value
	{
		return true;
	}
	else // else return false!!
	{
		return false;
	}
}
// constructor / destructor
Dollar::Dollar()
{
	dollar = "dollar";
	cent = "cent";
}

Dollar::~Dollar()
{
}

