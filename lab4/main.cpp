#include "Sort.h"
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string>

using namespace std;

int main() {


	int array[] = { 2,3,4,5,6 };
	Sort test1(array, 5); //we insert the pointer to the array, and the number of elements
	Sort test2(8, 5, 9);
	Sort test3(6, 1, 2, 3, 4, 5, 6); //nr elemente + elementele
	const char arr[] = {"10,22,60,77"}; 
	Sort test4("10,22,50,70");
	test4.Print();
   
	test1.QuickSort(true);
	test1.Print();

	test2.InsertSort(true);
	test2.Print();

	test3.BubbleSort(true);
	test3.Print();



	return 0;


};
