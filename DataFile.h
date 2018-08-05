#ifndef DATAFILE_H
#define DATAFILE_H

#include <iostream>
#include <fstream>

class DataFile
{
private:
    std::fstream *f;
    char *path;

public:
    DataFile();
    DataFile(char *);
    void open();
    void close();
    void write(char *, unsigned int, unsigned int);
    char *read(unsigned int, unsigned int);
};

#endif // !DATAFILE_H
