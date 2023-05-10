#ifndef ARITHMETIC_H
#define ARITHMETIC_H
#include <string>
#include<vector>
using namespace std;

class Arithmetic
{
public:
    void ADD(std::string address, int *regis, int *A);
    void SUB(std::string address, int *regis, int *A);
    void toBinary(int num,std::vector<int> &str);
    void flagStatus(int num1, int num2);
};

#endif
