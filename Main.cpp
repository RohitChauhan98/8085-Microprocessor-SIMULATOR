#include "Decoder.h"
#include "compiler.h"

#include <iostream>
#include <string>
using namespace std;


int main()
{

    cout << "Enter code below: " << endl;
    string code = "Hello";

    int Memory[5000]={0};
    Memory[2050] = 5;
    Memory[2051] = 3;
    
    Decoder dec1;

    while (code != "HLT")
    {
        getline(cin, code);
        dec1.decoder(code, Memory);
    }
}
