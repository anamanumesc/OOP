#pragma once
#include "BMW.h"
#include "Car.h"


	int BMW::get_fuel_capacity() {

		return this->fuel_capacity;
	}

	int BMW::get_fuel_consumption() {

		return this->fuel_consumption;
		cout << "am returnat consumul " << fuel_capacity << "la masina" << name;
	}
	int BMW::get_speed_on_weather(weather w){
		int a = w;

		return this->speed[a];
		cout << "am returnat viteza " << speed[a] << "la masina" << name << endl;

	}

	void BMW::print_info(){

		cout << "numele masinii este " << name << endl;
		cout << "capacitatea de benzina este: " << fuel_capacity << endl;
		cout << "consumul este: " << fuel_consumption << endl;
		cout << "viteza este : " << endl;
		cout << "pe ploaie: " << speed[0] << endl;
		cout << "pe soare: " << speed[1] << endl;
		cout << "pe zapada: " << speed[2] << endl;
	}



