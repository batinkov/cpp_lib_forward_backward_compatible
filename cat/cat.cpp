// g++ -c -o cat.o cat.cpp
// g++ -shared -o libcat.so cat.o

#include <iostream>
#include <sstream>
#include <string>
#include <stdarg.h>

#include "cat.hpp"

using namespace std;

string cat(int args, ...)
{
    string result;

    va_list valist;
    va_start(valist, args);

    for (auto i = 0; i < args; ++i)
    {
        result += va_arg(valist, char*);
    }

    va_end(valist);

    return result;
}

