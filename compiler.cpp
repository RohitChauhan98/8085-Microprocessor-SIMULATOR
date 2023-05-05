#include <iostream>
#include <string>
#include <Memory.h>
using namespace std;

int A,B,C,D,E,H,L;

void LDA(string address);
void MOV(char mainReg, char secReg);
void STA(string address);
void M(string address);


int compiler(string opcode, string address, char mainReg, char secReg)
{
    if(opcode == "LDA")
        LDA(address);
    else if(opcode == "MOV")
        MOV(mainReg, secReg);
    else if(opcode == "STA")
        STA(address);
    else if(opcode == "M")
        M(address);
}

void LDA(string address){
    int temp = stoi(address);
    A = Memory[temp];
}

void MOV(char mainReg, char secReg)
{
    switch(mainReg) {
  case 'A':
        A = B;
    break;
  case 'B':
        B = A;
    break;
//   case B:
//     // code block
//     break;.
//   case B:
//     // code block
//     break;
//   case B:
//     // code block
//     break;
  default:
    break;
}
}

void STA(string address)
{
    int temp = stoi(address);
    Memory[temp] = A;
}

void M(string address)
{
    int temp = stoi(address);
    int data;

    cin>>data;
    cout<<"Previous - "<<Memory[temp] << ",New - ";
    // cout<<temp;
    Memory[temp] = data;
}