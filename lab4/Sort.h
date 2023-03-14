#pragma once
#include <cstddef>

class Sort {

    // add data members
    int* list = nullptr;
    int nr_elements = 0;


public:

    //constructor 1
    Sort(int elements, int min, int max);

    //constructor 2
    Sort();
  

    //constructor 3
    Sort(int* list, int max);

    //constructor 4
    Sort(int count, ...);

    //constructor 5
    Sort(const char* s);

   
    //din cerinta

    void InsertSort(bool ascendent = false); 

    void QuickSort(bool ascendent = false);

    void BubbleSort(bool ascendent = false);

    void Print();  

    int  GetElementsCount();  

    int  GetElementFromIndex(int index);
};
