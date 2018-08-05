#include "DataFile.h"
#include <iostream>
#include <fstream>

using namespace std;

 DataFile::DataFile()
 {
     
 }

 DataFile::DataFile(char *path)
 {
    this->path = path;
 }

 void DataFile::open()
 {
    if(this->path == nullptr)
    {
        cout << "No existe el PATH, por favor ingrese uno valido!" << endl;
    }

    if(!this->f->is_open())
    {
        f->open(this->path);
    }

    else
    {
        cout << "Archivo esta abierto" << endl;
    }
 }

 void DataFile::close()
 {
     if(this->path == nullptr)
    {
        cout << "No existe el PATH, por favor ingrese uno valido!" << endl;
    }

    if(this->f->is_open())
    {
        f->close();
    }

    else
    {
        cout << "Archivo esta cerrado " << endl;
    }
 }

 void DataFile::write(char *data, unsigned int pos, unsigned int lenght)
 {
    if(f->is_open())
    {
        f->seekp(pos);
        f->write(data, lenght);
    }
 }

char *DataFile::read(unsigned int pos, unsigned int size)
{
    if(f->is_open())
    {
        f->seekg(pos);
        char *read = new char[size];
        f->read(read, pos);
        return read;
    }
}