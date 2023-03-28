#pragma once
#include "Car.h"
class BMW : protected Car{

private:
	int fuel_capacity = 50; //cati litrii tine o masina
	int fuel_consumption = 10; //cati litrii pe 100 km
	int speed[3] = { 70, 110, 60 }; // 3 viteze in functie de vreme
	char name = 'B';



public:

	virtual int get_fuel_capacity(); //we force the cars to rewrite their own destructors
	virtual int get_fuel_consumption();
	virtual int get_speed_on_weather(weather w);
	virtual void print_info();
};

