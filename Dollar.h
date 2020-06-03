#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <istream>
#include "Currency.h"

class Dollar : public Currency
{
protected:
	std::string dollar; // dollar data member
	std::string cent; // cent data member
public:
	// start override of virtual function from Currency

	/*
	Pre: string 
	Post: used to set dollar value
	Return: none
	*/
	void setBill(std::string);
	/*
	Pre: string 
	Post: used to set cent value
	Return: none
	*/
	void setCoin(std::string);

	/*
	Pre: none, getter for dollar datamember
	Post: return dollar
	*/
	std::string getBill() { return dollar; }
	/*
	Pre: none, getter for cent data member
	Post: return cent
	*/
	std::string getCoin() { return cent; }

	/*
	Pre: Currency& object,
	Post: adds two wholeNumbers and returns the int value
	*/
	int addWholeNumber(Currency& obj);
	/*
	Pre: Currency& object,
	Post: adds two remainders from currency class and returns the int value
	*/
	int addRemainder(Currency& obj);
	/*
	Pre: Currency& object,
	Post: subtracts two dValues and returns the int value
	*/
	int subWholeNumber(Currency& obj);
	/*
	Pre: Currency& object,
	Post: subtracts two cValues and returns the int value
	*/
	int subRemainder(Currency& obj);
	// end override of virtual function from Currency

	/*
	Pre: Dollar& object, used to add two dollar objects together
	Post: overload used to add two dollar objects together and return the two obects added together
	*/
	Dollar operator+(Dollar& obj); // addition overload operator
	/*
	Pre: Dollar& object, used to subtract two dollar objects
	Post: overload used to subtract two dollar objects and return the two obects subtracted from each other 
	*/
	Dollar operator-(Dollar& obj); // subtraction overload operator
	/*
	Pre: Dollar& object, to compare two dollar objects
	Post: overload used to compare two dollar objects values and return either true or false 
	*/
	bool operator>(const Dollar& obj); // comparing dollar objects for recurSelectionSort
	/*
	Pre: Dollar& object, to compare two dollar objects
	Post: overload used to compare two dollar objects values and return either true or false
	right now this is not being used - may need it for later purpose
	*/
	bool operator<(const Dollar& obj); // for later use

	// default constructor and destructor
	Dollar();
	~Dollar();
};
