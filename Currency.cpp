#include <iostream>
#include <string>
#include <typeinfo>
#include "Currency.h"
#include "Dollar.h"

// setters
void Currency::setDval(int d)
{
	dValue = d;
}
void Currency::setCval(int c)
{
	cValue = c;

	if (cValue > 100) // if you have over 100 cents do some stuff to convert that into dollars
	{
		dValue = dValue + (cValue / 100); // divide the cent value by 100 and add it to your dollars
		cValue = cValue % 100; // take the mod of cValue and set it to cents
	}
}

// constructors / destructors
Currency::Currency()
{
	dValue = 0;
	cValue = 0;
}
Currency::~Currency()
{
}


// defined overload operators
std::istream& operator>>(std::istream& in, Currency& obj)
{
	return in;
}

std::ostream& operator<<(std::ostream& out, Currency& obj)
{
	// for later user
	out << obj.getBill() << " " << obj.getDval() << " " << obj.getCval() << " " << obj.getCoin() << std::endl;
	return out;
}
