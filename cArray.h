#pragma once
#include <exception>
#include <iostream>
class Array
{
    int* _array;
    unsigned int _size;

public:
    Array(unsigned size = 0);

    void add(int value);

    void delItem(unsigned index);

    virtual ~Array();
    unsigned int getSize() const;
    int& operator[] (unsigned index);

    void print();
};