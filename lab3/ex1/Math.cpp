#include "Math.h"
#include <stdarg.h>
#include <string.h>
#include <cstdlib>

int Math::Add(int a, int b)
{
    return a + b;
}

int Math::Add(int a, int b, int c)
{
    return a + b + c;
}

int Math::Add(double a, double b)
{
    return a + b;
}

int Math::Add(double a, double b, double c)
{
    return a + b + c;
}

int Math::Mul(int a, int b)
{
    return a * b;
}

int Math::Mul(int a, int b, int c)
{
    return a * b * c;
}

int Math::Mul(double a, double b)
{
    return a * b;
}

int Math::Mul(double a, double b, double c)
{
    return a * b * c;
}


int  Math::Add(int count, ...)
{
    int suma = 0;
    va_list kiki;
    va_start(kiki, count);
    for (int i = 0; i < count; i++)
    {
        suma = suma + va_arg(kiki, int);
    }
    va_end(kiki);
    return suma;
}

char* Math::Add(const char* str1, const char* str2)
{
    int length_str1 = strlen(str1);
    int length_str2 = strlen(str2);

    char* str3 = (char*)malloc(length_str1 + length_str2 + 1);
    memcpy(str3, str1, length_str1);
    memcpy(str3 + length_str1, str2, length_str2 + 1);
    return str3;
}




