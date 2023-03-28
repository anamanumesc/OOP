#pragma once
#include "Car.h"

class Volvo : protected Car {

private:
	int fuel_capacity = 60; //cati litrii tine o masina
	int fuel_consumption = 36; //cati litrii pe 100 km
	int speed[3] = { 57, 270, 90 }; // 3 viteze in functie de vreme
	char name = 'V';


public:

	virtual int get_fuel_capacity(); //we force the cars to rewrite their own destructors
	virtual int get_fuel_consumption();
	virtual int get_speed_on_weather(weather w);
	virtual void print_info();
};



