#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void decoder(string instr,int Memory[]);

int main()
{
    int Memory[5000] = {0};
    Memory[2050] = 5;
    Memory[2051] = 3;

    cout << "Enter code below: " << endl;
    string code = "Hello";

    while (code != "HLT")
    {
        getline(cin, code);
        decoder(code, Memory);
    }
}
