#ifndef DELIMITERVARSIZE_H
#define DELIMITERVARSIZE_H

#include "DataFile.h"
#include <fstream>
#include <iostream>

class DelimeterVarSize
{
private:
    DataFile * file;
    int code;
    char * name;
    double salary;
    char * job;

public:
    DelimeterVarSize();
    void printRegister();
    char *toChar();
    void fromChar(char *);
    void openFile(char *);
    void write_toFile();
    void read_fromFile(int);
    void closeFile();
    int getSize();
};

#endif // !DELIMITERVARSIZE_H
