#pragma once
#include "Car.h"
class Fiat : protected Car {

private:
	int fuel_capacity = 30; //cati litrii tine o masina
	int fuel_consumption = 20; //cati litrii pe 100 km
	int speed[3] = { 50, 130, 40 }; // 3 viteze in functie de vreme
	char name = 'F';


public:

	virtual int get_fuel_capacity(); //we force the cars to rewrite their own destructors
	virtual int get_fuel_consumption();
	virtual int get_speed_on_weather(weather w);
	virtual void print_info();
};

