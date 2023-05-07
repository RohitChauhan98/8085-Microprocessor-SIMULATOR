#include "compiler.h"

#include <iostream>
#include <string>
using namespace std;


int A, B, C, D, E, H, L;
void Compiler::LDA(string address,int Memory[])
{
    int temp = stoi(address);
    A = Memory[temp];
}

void Compiler::MOV(char mainReg, char secReg)
{
    switch (mainReg)
    {
    case 'A':
        A = B;
        break;
    case 'B':
        B = A;
        break;

    default:
        break;
    }
}

void Compiler::STA(string address,int Memory[])
{
    int temp = stoi(address);
    Memory[temp] = A;
}

void Compiler::M(string address,int Memory[])
{
    int temp = stoi(address);
    cout << "Value - " << Memory[temp] << endl;
}

void Compiler::compiler(string opcode, string address, char mainReg, char secReg,int Memory[])
{
    
    if (opcode == "LDA")
        Compiler::LDA(address,Memory);
    else if (opcode == "MOV")
        Compiler::MOV(mainReg, secReg);
    else if (opcode == "STA")
        Compiler::STA(address,Memory);
    else if (opcode == "M")
        Compiler::M(address,Memory);
}