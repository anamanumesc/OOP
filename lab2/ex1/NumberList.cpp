#include "NumberList.h"
#include <iostream>
#include <stdlib.h>
//we write the functions here
//contrustor = method that initialises the class and 

void NumberList::Init() {

	this->count = 0;


}

bool NumberList::Add(int x) {  // adds X to the numbers list and increase the data member count

    if (count >= 10)
    return  true;
   

	this->numbers[this->count] = x;
	this->count++;

   

} 
void NumberList::Sort() {
    // A function to implement bubble sort aux =  this->numbers[i]; 
        int aux;
        int i, j;
        for (i = 0; i < (this->count); i++) {  //this -> count will know how many elements are inside

            // Last i elements are already 
            // in place
            for (j = 0; j < ((this->count) - i - 1); j++) 
                if ((this->numbers[j]) > (this->numbers[j + 1])) 
                {

                    aux = this->numbers[i];
                    this->numbers[i] = this->numbers[j];
                    this->numbers[j] = aux;
                }

        }

  }


void NumberList::Print(){
        
        
    int i;
    for (i = 0; i < (this->count); i++) {
    
        printf("%d\n", this->numbers[i]);
    
    }
    


}