#pragma once
#include <iostream>
#include "weather.h"
#include "Car.h"
#include "Circuit.h"
using namespace std;

class Car{

protected:

	virtual int get_fuel_capacity() = 0; //we force the cars to rewrite their own methods
	virtual int get_fuel_consumption() = 0;
	virtual int get_speed_on_weather(weather w) = 0;
	virtual void print_info() = 0;

	///o sa folosesc un pointer de tip CAR ca sa accesez masinile
	///o sa trebuiasca sa scriu interiorul metodelor metodele din fiecare fiu masina
	//functiile trebuie sa fie virtuale
	//The fucntions are defined in the base class and overridden in a derived class

	//this is an abstract class
	//all of its methods are virtual methods
	//doesnt need a .cpp file

	
};

