#ifndef DECODER_H
#define DECODER_H
#include <string>

using namespace std;

class Decoder
{
public:
    void decoder(string command, int *temp);
    void Execution(string command, int Memory[]);
};

#endif
