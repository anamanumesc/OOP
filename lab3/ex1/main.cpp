#include <iostream>
#include <stdarg.h>
#include <string.h>
#include <cstdlib>
#include "Math.h" 
using namespace std;

int main()
{


    Math m;
    Math a;
    cout << m.Add("buna", "seara") << endl;
    cout << a.Add(6, 5, 5, 5, 5, 5, 5) << endl;
    cout << a.Add(4,4) << endl;

    return 0;
}