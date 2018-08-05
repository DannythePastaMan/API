#include "FixedSize_Register.h"
#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>

using namespace std;

char buffer[sizeof(Register)];

FixedSize_Register::FixedSize_Register()
{

}

void FixedSize_Register::openFile(char *file)
{

}

void FixedSize_Register::closeFile()
{

}

void FixedSize_Register::printRegister()
{

}

char *FixedSize_Register::toChar()
{
    Register r;
    memcpy(buffer, &r, sizeof(Register));

    return buffer;
}

void FixedSize_Register::fromChar(char *buffer)
{

}

int FixedSize_Register::getSize()
{
    return sizeof(Register);
}

void FixedSize_Register::write_toFile()
{

}

void FixedSize_Register::read_fromFile(int pos)
{

}