#include "Math.h"
#include <stdarg.h>
#include <string.h>
#include <cstdlib>

int Math::Add(int x, int y)
{
    return x + y;
}

int Math::Add(int x, int y, int z)
{
    return x + y + z;
}

int Math::Add(double x, double y)
{
    return x + y;
}

int Math::Add(double x, double y, double z)
{
    return x + y + z;
}

int Math::Mul(int x, int y)
{
    return x * y;
}

int Math::Mul(int x, int y, int z)
{
    return x * y * z;
}

int Math::Mul(double x, double y)
{
    return x * y;
}

int Math::Mul(double x, double y, double z)
{
    return x * y * z;
}


int  Math::Add(int count, ...)
{
    int result = 0;
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; ++i)
    {
        result += va_arg(args, int);
    }
    va_end(args);
    return result;
}

char* Math::Add(const char* str1, const char* str2) {

    int length_str1 = strlen(str1);
    int length_str2 = strlen(str2);
    
    char* str3;
        
    str3 = (char*)malloc((length_str1 + length_str2 + 1) * sizeof(char));

    memset(str3, 0, (length_str1 + length_str2 + 1)); 
    
     
    memcpy(str3, str1, length_str1); // pui primul cuvant
    memcpy(str3+length_str1, str2, length_str2); //pui al 2 lea

    return str3;


}





