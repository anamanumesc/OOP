#include "myClass.h"
#include "myClass.h"
#include <iostream>


using namespace std;

int main()
{
    myClass c1;
    myClass c2;

  
    c1.setMathGrade(9.0);
    c1.setEnglishGrade(7.0);
    c1.setHistoryGrade(6.0);

    cout << c1.getAverageGrade();




    return 0;
}
