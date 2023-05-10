#include "compiler.h"

#include <iostream>
#include <string>
using namespace std;


int A, B, C, D, E, H, L;
int flag[8] = {0};
//At 0 index - sign flag
//At 1 index - zero flag
//At 3 index - parity flag
//At 5 index - auxiliaryCarry flag
//At 7 index - Carry flag



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
    cout << "Value - " << Memory[temp];
}

void Compiler::ADD(string address)
{
    int temp = address[0];
    switch (temp)
    {
    case 'A':
        A = A+A;
        break;
    case 'B':
        A = A+B;
        break;
    case 'C':
        A = A+C;
        break;
    case 'D':
        A = A+D;
        break;

    default:
        break;
    }
}


void Compiler::MVI(char mainReg, int data){
    switch (mainReg)
    {
    case 'A':
        A = data;
        break;
    case 'B':
        B = data;
        break;
    case 'C':
        C = data;
        break;
    case 'D':
        D = data;
        break;

    default:
        break;
    }
}

void Compiler::Instruction_Size(string opcode, int *temp)
{
    
    if (opcode == "LDA")
        *temp = 3;
    else if (opcode == "MOV")
        *temp = 1;
    else if (opcode == "STA")
        *temp = 3;
    else if (opcode == "M")
        *temp = 1;
    else
        *temp = 1;
}


void Compiler::Execute(string opcode, string address, char mainReg, char secReg,int Memory[])
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





