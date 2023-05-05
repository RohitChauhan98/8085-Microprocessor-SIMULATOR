#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int A, B, C, D, E, H, L;


void LDA(string address,int Memory[]);
void MOV(char mainReg, char secReg);
void STA(string address,int Memory[]);
void M(string address,int Memory[]);

void compiler(string opcode, string address, char mainReg, char secReg,int Memory[])
{

    if (opcode == "LDA")
        LDA(address,Memory);
    else if (opcode == "MOV")
        MOV(mainReg, secReg);
    else if (opcode == "STA")
        STA(address,Memory);
    else if (opcode == "M")
        M(address,Memory);
}

void LDA(string address,int Memory[])
{
    int temp = stoi(address);
    A = Memory[temp];
}

void MOV(char mainReg, char secReg)
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

void STA(string address,int Memory[])
{
    int temp = stoi(address);
    Memory[temp] = A;
}

void M(string address,int Memory[])
{
    int temp = stoi(address);
    cout << "Value - " << Memory[temp] << endl;
}