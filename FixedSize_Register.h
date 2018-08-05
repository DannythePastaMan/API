#ifndef FIXEDSIZE_REGISTER_H
#define FIXEDSIZE_REGISTER_H

#include <fstream>
#include <iostream>
#include "DataFile.h"

struct Register
{
    DataFile *file;
    int code;
    char *name[30];
    double salary;
    char *job[20]; 
};

class FixedSize_Register
{
public:
    FixedSize_Register();
    void printRegister();
    char *toChar();
    void fromChar(char *);
    void openFile(char *);
    void write_toFile();
    void read_fromFile(int);
    void closeFile();
    int getSize();
    
};

#endif // !FIXEDSIZE_REGISTER_H
