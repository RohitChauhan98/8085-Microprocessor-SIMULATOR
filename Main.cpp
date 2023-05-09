#include "Decoder.h"
#include "compiler.h"

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, string> instruction;

    cout << "Enter command below: " << endl;
    string command = "Hello";

    int Memory[5000] = {0};
    Memory[2050] = 5;
    Memory[2051] = 3;

    Decoder dec1;
    int start = 2000;
    int count = 0;
    int temp = 0;

    while (command != "Stop")
    {
        cout << start << " ";
        getline(cin, command);
        if(command == "execute")
        {
            for(auto i:instruction)
            {
                if(i.second == "HLT")
                {
                    break;
                }
                else
                {
                    dec1.Execution(i.second, Memory);
                }
            }
            while(command != "Stop"){
                getline(cin, command);
                dec1.Execution(command, Memory);
            }
            return 0;
        }
        if(command == "HLT")
        {
            start += 1;
            instruction[start] = command;
            continue;
        }
        dec1.decoder(command, &temp);
        instruction[start] = command;
        start += temp;
    }
    return 0;
}
        // dec1.Execution(command, Memory);
