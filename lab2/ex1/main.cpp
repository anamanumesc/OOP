#include <iostream>

#include <stdlib.h>
#include "NumberList.h"

using namespace std;

int main(){


    NumberList a1;
    NumberList a2;
    NumberList a3;

    a1.Init();
    a1.Add(6);
    a1.Add(1);
    a1.Add(70);
    a1.Sort();
    a1.Print();




}