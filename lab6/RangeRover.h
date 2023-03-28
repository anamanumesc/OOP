#pragma once
#include "Car.h"

class RangeRover: protected Car {

private:
	int fuel_capacity = 30; //cati litrii tine o masina
	int fuel_consumption = 26; //cati litrii pe 100 km
	int speed[3] = { 57, 230, 30 }; // 3 viteze in functie de vreme
	char name = 'R';


public:

	virtual int get_fuel_capacity(); //we force the cars to rewrite their own destructors
	virtual int get_fuel_consumption();
	virtual int get_speed_on_weather(weather w);
	virtual void print_info();
};


