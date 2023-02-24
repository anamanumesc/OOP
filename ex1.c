#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

FILE* f ;
f = fopen("in.txt", "r");

int num;
int sum = 0;

while (!feof(f)){ //feof printeaza 0 daca am ajuns la finalul fisierului

num = 0;

for(int c=fgetc(f); c != '\n' && c != EOF; c=fgetc(f)){
  num*=10;
  num+= c -'0';
}

sum = sum + num;


}
printf ("sum of numbers: %i \n", sum);

}

