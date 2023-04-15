#include <iostream>;


 float operator"" _Kelvin(unsigned long long temp) {
        return temp - 273.15;
  }

 float operator"" _Fahrenheit(unsigned long long temp) { //long double 
        return (temp - 32) * 5 / 9;
 }


int main() {


    float a = 300_Kelvin;
    
    float b = 120_Fahrenheit;
 

    return 0;

}
