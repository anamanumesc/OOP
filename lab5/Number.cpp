#include "Number.h"
#include <string.h>
#include <iostream>
#include <math.h>
using namespace std;
Number::Number(const Number& i)
{
	nr_vector = new char[1000];
	this->baza = i.baza;
	strcpy(this->nr_vector, i.nr_vector);
}

Number::Number(const char* value, int base)
{
	nr_vector = new char[1000];
	this->baza = base;
	strcpy(this->nr_vector, value);
}


int StringToInt(const Number& string) {

	//luam un string si il convertesc in numar
	//asumam ca numarul din string e in baza 10
	Number aux = string;
	int number = 0;
	int tens = 1;

	for (int i = strlen(aux.nr_vector) - 1; i >= 0; i--) {

		if (aux.nr_vector[i] <= 9 && aux.nr_vector[i] >= 0) {

			number = number + (aux.nr_vector[i] - '0') * tens;
			tens = tens * 10;
		}
	}
	return number;
}



Number::Number(const char* value, int base) {

	this->baza = base;

	//in loc de strlen folosesc variabila counter
	int counter = 0;
	while (value[counter]){
		counter++;
	}
	this->nr_vector = new char[counter + 1];// aloc memorie

	int pozitie = 0;
	while (nr_vector[pozitie]) {

		this->nr_vector[pozitie] = value[pozitie];
		pozitie++;
	}
	nr_vector[pozitie + 1] = '\0'; 
 }

void Number::SwitchBase(int newBase) {

	//ca sa nu folosesc strlen 
	int len = this->GetDigitsCount();


if (newBase > this->baza)
	{

		this->baza = newBase;

		int tens = 1;
		int final_number = 0;

		//converting the number from any base to base 10

		for (int i = len-1; i >= 0; i--) {

			final_number = final_number + (nr_vector[i] - '0') * tens;
			tens = tens * 10;
		}

		//now i have to convert the number from decimal to any base
		//i start from the end using modulo
		
		int indice = 0; //la ce putere o sa fie
		
		int last_digit;
		//cout << "nr in int " << final_number;

		//initializez vechiul array cu 0
		for (int i = 0; i < len; i++) {
		
			this->nr_vector[i] = '\0';
		}


		int rest;

		int cnt = 0; //counter pentru cat de lung e noul meu numar in noua baza

		int temp = final_number;
		while (temp) {
		
			temp = temp / newBase;
			cnt++;
		}

		//cout << "the counter is: " << cnt << endl;

		while(final_number){
			
			int rest = final_number % newBase;


			if (rest >= 0 && rest <= 9) {
				this->nr_vector[cnt - 1] = rest + '0';
			}
			else if (rest > 9) {
			
				this->nr_vector[cnt - 1] = rest + 55;
			}

		    //cout << "digit to new base is:  " << rest << endl;
			
			final_number = final_number / newBase;

			cnt--;
			
		}
			
	}

}


int Number::GetDigitsCount() {
	int counter = 0;

	for (int i = 0; i < strlen(this->nr_vector); i++){

		counter++;
	}

	return counter;
}


void Number::Print() {

	cout << "numarul tau in baza " << this->baza << " este: ";

	for (int i = 0; i < strlen(nr_vector); i++) {
		cout << nr_vector[i];
	}
	cout << endl;
}

int Number::GetBase() {

	return this->baza;

}
