#include "Decoder.h"
#include "compiler.h"

#include <iostream>
#include <string>
using namespace std;

// FUNCTION OF DECODING AND RETURN THE INSTRUCTION SIZE
 void Decoder::decoder(string command, int *temp)
 {
    int i = 0;
    string address;
    string opcode;
    char mainReg;
    char secReg;
    int data;

    if (command[0] == 'M' && command[1] != 'O')
    {

        opcode = "M";
        i += 1;
        while (command[i] != '\0')
        {
            i++;
        }
        address = command.substr(1, i);
    }

    else if (command[0] == 'M' && command[1] == 'V')
    {
        opcode = "MVI";
        mainReg = command[4];
        string temp = command.substr(5, 7);
        int data = stoi(temp);
    }

    else
    {
        while (command[i] != ' ')
        {
            i++;
        }
        opcode = command.substr(0, i);
        i += 1;
        int j = i;
        while (command[i] != '\0')
        {
            i++;
        }

        if (command[5] == ',')
        {
            mainReg = command[j];
            secReg = command[j + 2];
        }

        else
            address = command.substr(j, i);
    }
    

    Compiler comp1;

    comp1.Instruction_Size(opcode, temp);
}


// FUNCTION FOR EXECUTION
void Decoder::Execution(string command, int Memory[])
{

    int i = 0;
    string address;
    string opcode;
    char mainReg;
    char secReg;
    int data;

    if (command[0] == 'M' && command[1] != 'O')
    {

        opcode = "M";
        i += 1;
        while (command[i] != '\0')
        {
            i++;
        }
        address = command.substr(1, i);
    }

    else if (command[0] == 'M' && command[1] == 'V')
    {
        opcode = "MVI";
        mainReg = command[4];
        string temp = command.substr(5, 7);
        int data = stoi(temp);
    }

    else
    {
        while (command[i] != ' ')
        {
            i++;
        }
        opcode = command.substr(0, i);
        i += 1;
        int j = i;
        while (command[i] != '\0')
        {
            i++;
        }

        if (command[5] == ',')
        {
            mainReg = command[j];
            secReg = command[j + 2];
        }

        else
            address = command.substr(j, i);
    }

    Compiler comp2;

    comp2.Execute(opcode, address, mainReg, secReg, Memory);
}
