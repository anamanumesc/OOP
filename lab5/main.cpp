// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "Number.h"
#include <iostream>
using namespace std;


int main()
{
	Number c("100", 10), d("10", 10);
	int a = StringToInt(c) + StringToInt(d);
	printf("%d", a);

	//Number n1("872562", 10);
	//n1.Print();
	//n1.SwitchBase(16);
	//n1.Print();

	//cout << aux1;

	////Number n2("734", 8);

	////Number n3("FF", 16);
	//
	//return 0;

	//cout << StringToInt("4782842");
}
