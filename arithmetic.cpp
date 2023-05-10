#include "arithmetic.h"
#include "compiler.h"

#include <iostream>
#include <algorithm>
using namespace std;

void Arithmetic::toBinary(int num, vector<int> &str)
{
    while (num != 0)
    {
        if (num % 2 == 0)
        {
            str.push_back('0');
            num = num / 2;
        }
        else
        {
            str.push_back('1');
            num = num / 2;
        }
    }
    reverse(str.begin(), str.end());
}

void Arithmetic::flagStatus(int num1, int num2)
{
    vector<int> temp1 , temp2;
    toBinary(num1, temp1);
    toBinary(num2, temp2);
}

void Arithmetic::ADD(string address, int *regis, int *A)
{
    char temp = address[0];
    switch (temp)
    {
    case 'A':
        *A = *A + *regis;
        break;
    case 'B':
        *A = *A + *regis;
        break;
    case 'C':
        *A = *A + *regis;
        break;
    case 'D':
        *A = *A + *regis;
        break;

    default:
        break;
    }
}

void Arithmetic::SUB(string address, int *regis, int *A)
{
}
