#ifndef COMPILER_H
#define COMPILER_H
#include<string>


class Compiler
{
public:

    void LDA(std::string address, int Memory[]);

    void MOV(char mainReg, char secReg);

    void STA(std::string address, int Memory[]);

    void M(std::string address, int Memory[]);

    void MVI(char mainReg, int data);

    void ADD(std::string address);

    // void 

    void Instruction_Size(std::string opcode, int *temp);

    void Execute(std::string opcode, std::string address, char mainReg, char secReg, int Memory[]);
};

#endif