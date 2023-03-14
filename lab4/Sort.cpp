#include "Sort.h"
#include <iostream>
#include <cmath>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string>

using namespace std;

//---------------constructors!!!-------------------------------------------------

//constructor 1
Sort::Sort(int elements, int min, int max) {

    this->nr_elements = elements;

    this->list = new int[elements];
    time_t t;

    srand((unsigned)time(&t));

    for (int i = 0; i < elements; i++) {
    
        list[i] = (min + rand() % (max - min + 1));
    }
};

//constructor 2
Sort::Sort() : list(new int[6] {1, 2, 3, 4, 5, 6}) {
    this->nr_elements = 6;
}


//constructor 3
//has two parameters: pointer to a vector and number of elements inside
Sort::Sort(int* local_list, int max) {

    this->nr_elements = max;
    
    this->list = (int*)calloc(max, sizeof(int)); //set the size

    for (int i = 0; i < max; i++) {
    
        list[i] = local_list[i];
    }
};

//constructor 4
//create the list using va_args

Sort::Sort(int count, ...) {

    this->list = (int*)calloc(count, sizeof(int));

    this->nr_elements = count;

    va_list v;
    va_start(v, count);
    for (int i = 0; i < count; i++) {

        list[i] = va_arg(v, int);

    }
    va_end(v);
};

//constructor 5 
//we get a string and we convert it to numbers 

Sort::Sort(const char* s)
{
    char *s1 = NULL;
    s1 = new char[strlen(s)];
    this->list = new int[1000];
    int c = 0;
    strcpy(s1, s);
    char* p = strtok(s1, ",");
    while (p)
    {
        int x = 0;
        for (int i = 0; i < strlen(p); i++)
        {
            x = x * 10 + p[i] - '0';
        }
       
        this->list[c] = x;
        p = strtok(NULL, ",");
        c++;
        nr_elements++;      
    }
}

//din cerinta
void Sort::InsertSort(bool ascendent) {
    int key;
    int j;
    if (ascendent == false)
    {
        for (int i = 0; i < nr_elements; i++)
        {
            key = this->list[i];
            j = i - 1;
            while (j >= 0 && key > list[j])
            {
                list[j + 1] = list[j];
                j = j - 1;
            }
            list[j + 1] = key;
        }
    }
    else
    {
        for (int i = 0; i < nr_elements; i++)
        {
            key = this-> list[i];
            j = i - 1;
            while (j >= 0 && key < list[j])
            {
                list[j+1] = list[j];
                j = j - 1;
            }
            list[j + 1] = key;
        }
    }
}

 int partitionA(int v[], int low, int high){
        int pivot = v[high];
        int i = (low - 1);
        for (int j = low; j <= high - 1; j++)
        {
            if (v[j] < pivot)
            {
                i++;
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
        int aux = v[i + 1];
        v[i + 1] = v[high];
        v[high] = aux;
        return (i + 1);
    }

 void quicksortA(int v[], int low, int high)
    {
        if (low < high)
        {
            int pi = partitionA(v, low, high);
            quicksortA(v, low, pi - 1);
            quicksortA(v, pi + 1, high);
        }
    }

 int partitionD(int v[], int low, int high)
    {
        int pivot = v[high];
        int i = (low - 1);
        for (int j = low; j <= high - 1; j++)
        {
            if (v[j] > pivot)
            {
                i++;
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
        int aux = v[i + 1];
        v[i + 1] = v[high];
        v[high] = aux;
        return (i + 1);
    }

 void quicksortD(int v[], int low, int high)
    {
     if (low < high)
        {
            int pi = partitionD(v, low, high);
            quicksortD(v, low, pi - 1);
            quicksortD(v, pi + 1, high);
        }
    }


  void Sort::QuickSort(bool ascendent)
    {
        if (ascendent == true)
        {
            quicksortA(list, 0, nr_elements - 1);
        }
        else
            quicksortD(list, 0, nr_elements - 1);
    }

  void Sort::BubbleSort(bool ascendent)
  {
      for (int i = 0; i < this->nr_elements - 1; i++)
          for (int j = i + 1; j < this->nr_elements; j++)
              if (ascendent == true)
              {
                  if (this->list[i] > this->list[j])
                      swap(this->list[i], this->list[j]);
              }
              else
              {
                  if (this->list[i] < this->list[j])
                      swap(this->list[i], this->list[j]);
              }
  }

void Sort::Print(){
   
    for (int i = 0; i < nr_elements; i++){
    
        cout << list[i] << ",";
    }
    cout << endl;
};

int Sort::GetElementsCount() {

    return this->nr_elements;

};

int Sort::GetElementFromIndex(int index) {

    return list[index];
};

