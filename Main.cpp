#include<iostream>
#include<string>
#include<Memory.h>
using namespace std;

void decoder(string instr, int Memory[]);
int main()
{
    int Memory[100] ={0};

    cout<<"Enter code below: "<<endl;
    string code;
    while(code!="HLT")
    {
        getline(cin, code);
        if(code == "HLT")
            return 0;
        decoder(code, Memory);

    }
}

extern int myArray[];