#include "circuit.h"
#include <iostream>
#include "weather.h"
#include "Car.h"
#include "Circuit.h"
#include "BMW.h"


Circuit::Circuit(){
	this->sir_de_masini = (Car**)(malloc(this->index_max * sizeof(Car*)));
	this->index_max = 0;
	this->length = 100;
	this->vreme = sunny;
}

Circuit::~Circuit(){
	free(sir_de_masini);
	this->index_lista = 0;
	this->index_max = 0;
	this->vreme = sunny;
}

void Circuit::AddCar(Car* a) {

	//a este un pointer de tip Car
	//sir_de_masini este un pointer la vectorul cu pointeri
	sir_de_masini[index_lista] = a;
	index_lista++;

}; //cand in main faci cu new adaug

void Circuit::SetLength(int a) {

	this->length = a;

} //lungimea traseului

void Circuit::SetWeather(weather w) {
	this->vreme = w;
}//setezi vremea in functia circuit


void swap(float* xp, float* yp)
{
	float temp = *xp;
	*xp = *yp;
	*yp = temp;
}

// A function to implement bubble sort
void bubbleSort(float arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)

		// Last i elements are already in place
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
}


int Circuit::Race(){

	int *time = new float[10];
	for (int i = 0; i < index_lista; i++)
	{
		time[i] = (this->length) / (sir_de_masini[i]->get_speed_on_weather(this->vreme)) * 60;
	}
	return *time;
}

void Circuit::ShowFinalRanks() {

		int i;
		float* timp = this->Race();
		bubbleSort(timp, this->index_lista);
		for (i = 0; i < this->index_max; i++)
			cout << "Car number " << i + 1 << "~~~~" << this->sir_de_masini[i]-> nume << " a terminat in " << timp[i] << " minute" << endl;
		cout << endl;
	}


void Circuit::ShowWhoDidNotFinish()
{
	for (int i = 0; i < this->index_lista; i++)
	{
		if ((sir_de_masini[i]->get_fuel_capacity()) * ((this->length) / 100.) > sir_de_masini[i]->get_fuel_consumption())
			cout << "Car  didn't finish the race";
	}
	cout << endl;
}
