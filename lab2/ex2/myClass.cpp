#include "myClass.h"
#include <string.h>
#include <iostream>



//here we insert the class functions (methods)
//ca sa accesam atribute (variabile) din clasa folosim this->


//math
void myClass::setMathGrade(float input) {

	this->mathGrade = input;
}

float myClass::getMathGrade() {

	return this->mathGrade; 
}


void myClass::setEnglishGrade(float input) {

	this->englishGrade = input;
}

float myClass::getEnglishGrade() {

	return this->englishGrade;
}


void myClass::setHistoryGrade(float input) {

	this->historyGrade = input;

}

float myClass::getHistoryGrade() {

	return this->historyGrade;
}

void myClass::setName(const char name[50]) {

	strcpy_s(this->name, 20 , name); //str 2 in str 1
}

char* myClass::getName() {

	char* ptr = this -> name;

	return ptr;
}

float myClass::getAverageGrade() {

	return ((this->mathGrade + this->historyGrade + this->englishGrade) / 3);

}




