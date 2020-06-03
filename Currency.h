#pragma once
#include <iostream>
#include <string>
// Abstract base class
class Currency
{
protected:
	int cValue; // remainder value i.e cents/centavo/etc
	int dValue; // whole number value i.e yen/dollar/etc
public:
	// setters
	/*
	Pre: int
	Post: none
	Return: no return value
	*/
	void setDval(int);
	/*
	Pre: int
	Post: none
	Return: no return value
	*/
	void setCval(int);

	// getters
	/*
	Pre: none
	Post: none
	Return: return int dValue
	*/
	int getDval() { return dValue; }
	/*
	Pre: none
	Post: none
	Return: return int cValue
	*/
	int getCval() { return cValue; }

	// start pure virtual functions
	/*
	Pre: string
	Post: none
	Return: pure virtual no return
	*/
	virtual void setBill(std::string) = 0;
	/*
	Pre: string
	Post: none
	Return: pure virtual no return
	*/
	virtual void setCoin(std::string) = 0;

	/*
	Pre: none
	Post: none
	Return: pure virtual no return
	*/
	virtual std::string getBill() = 0;
	/*
	Pre: none
	Post: none
	Return: pure virtual no return
	*/
	virtual std::string getCoin() = 0;

	/*
	Pre: none
	Post: none
	Return: pure virtual no return
	*/
	virtual int addWholeNumber(Currency& obj) = 0;
	/*
	Pre: none
	Post: none
	Return: pure virtual no return
	*/
	virtual int addRemainder(Currency& obj) = 0;
	/*
	Pre: none
	Post: none
	Return: pure virtual no return
	*/
	virtual int subWholeNumber(Currency& obj) = 0;
	/*
	Pre: none
	Post: none
	Return: pure virtual no return
	*/
	virtual int subRemainder(Currency& obj) = 0;
	// end pure virtual functions

	// friend functions
	/*
	Pre: istream in_file, currency object
	Post: none
	Return: returns in
	*/
	friend std::istream& operator>>(std::istream& in, Currency& obj);
	/*
	Pre: istream out_file, currency object
	Post: none
	Return: returns out
	*/
	friend std::ostream& operator<<(std::ostream& out, Currency& obj);

	// constructors / destructors
	Currency();
	virtual ~Currency();
};
