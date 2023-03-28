#include "Car.h"

class Circuit{
private:

	Car** sir_de_masini; //un pointer catre un vector cu pointeri
	int index_max = 20;
	int index_lista = 0; //indexul (locul in care se afla masina)
	int length;
	weather vreme; 

public:
//voi adauga intr un vector acest obiect de tip int
	void AddCar(Car*); //cand in main faci cu new adaugi o masina in vectorul cu pintere de masini

	void SetLength(int a); //lungimea traseului
	void SetWeather(weather w); //setezi vremea in functia circuit
	
	int Race();
	void ShowFinalRanks(); 
	void ShowWhoDidNotFinish();
};
