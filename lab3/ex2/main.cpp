#include <iostream>
#include <stdio.h>
#include "Canvas.h"

using namespace std;

int main()
{
  Canvas test(70,70);
   
   test.SetPoint(5, 5, 'O');
   test.DrawRect(2, 2, 10, 10, 'b');
   test.DrawCircle(25, 25, 5, 'K');
   test.FillCircle(50, 10, 10, 'j');
   test.DrawLine(1, 1 , 25, 25, '-');
   test.FillRect(60, 60, 69, 69 ,'g');
  
   test.Print();



    return 0;
}
