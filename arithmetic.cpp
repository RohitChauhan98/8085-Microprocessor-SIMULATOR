#include "arithmetic.h"
#include "compiler.h"

#include <iostream>
using namespace std;

void Arithmetic::ADD(string address, int *register, int *A)
{
    char temp = address[0];
    switch (temp)
    {
    case 'A':
        *A = *A + *register;
        break;
    case 'B':
        *A = *A + *register;
        break;
    case 'C':
        *A = *A + *register;
        break;
    case 'D':
        *A = *A + *register;
        break;

    default:
        break;
    }
}

void Arithmetic::SUB(string address, int *register, int A)
{
}
