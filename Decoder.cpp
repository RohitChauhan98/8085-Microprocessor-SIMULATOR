#include <iostream>
#include <string>
#include<Memory.h>
using namespace std;

void compiler(string opcode, string address, char mainReg, char secReg, int *Memory);

void decoder(string code, int *Memory)
{
    int i = 0;
    string address;
    string opcode;
    char mainReg;
    char secReg;
    int data;

    if (code[0] == 'M' && code[1] != 'O')
    {

        opcode = "M";
        i += 1;
        while (code[i] != '\0')
        {
            i++;
        }
        address = code.substr(1, i);
        // i += 1;
        // int j = i;

        // while (code[i] != '\0')
        // {
        //     i++;
        // }
        // data = stoi(code.substr(j, i));
    }

    else
    {
        while (code[i] != ' ')
        {
            i++;
        }
        opcode = code.substr(0, i);
        i += 1;
        int j = i;
        while (code[i] != '\0')
        {
            i++;
        }

        if (code[5] == ',')
        {
            mainReg = code[j];
            secReg = code[j + 2];
        }
        // else if (code[i - 1] == 'H')
        //     address = code.substr(j, i);
        else
            address = code.substr(j, i);
    }

    // else if (code.length() == 5 && code[4] == 'A')
    // {
    //     // code[j] == 'A' || code[j] == 'B' || code[j] == 'C' || code[j] == 'D' || code[j] == 'E' || code[j] == 'H' || code[j] == 'L'
    //     mainReg = code[j];
    // }

    compiler(opcode, address, mainReg, secReg, Memory);
}