#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void compiler(string opcode, string address, char mainReg, char secReg,int Memory[]);

void decoder(string code,int Memory[])
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
        
        else
            address = code.substr(j, i);
    }



    compiler(opcode, address, mainReg, secReg, Memory);
}