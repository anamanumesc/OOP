#pragma once
class Number {

	char* nr_vector;
	int baza;

public:




	friend int operator+(Number n1, Number n2);

	Number(const char* value, int base); // where base is between 2 and 16
	Number(const Number& i);

	//~Number();

	int friend StringToInt(const Number& i);

	// add operators and copy/move constructor


	void SwitchBase(int newBase);

	void Print();

	int  GetDigitsCount(); // returns the number of digits for the current number

	int  GetBase(); // returns the current base

};
