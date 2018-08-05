#ifndef KNOWNSIZEVAR_REGISTER_H
#define KNOWNSIZEVAR_REGISTER_H

#include "DataFile.h"
#include <iostream>
#include <fstream>

class KnownSizeVar_Register
{
private:
    DataFile *file;
    int code, sizename;
    char *name;
    double salary;
    int sizejobe;
    char *job;

public:
    KnownSizeVar_Register();
    void printRegister();
    char *toChar();
    void fromChar(char *);
    void openFile(char *);
    void write_toFile();
    void read_fromFile(int);
    void closeFile();
    int getSize();
};

#endif // !KNOWNSIZEVAR_REGISTER_H
