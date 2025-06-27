#pragma once
#include <vector>
#include <iostream>
using namespace std;

void create_vectors();

void lab_vectors();

void lab_vectors_2();

void stl_squential_containers_1_2_1_10();
void stl_squential_containers_1_2_1_11();
void stl_squential_containers_1_2_1_13();

class A
{
    int number;
    int number2;
public:
    A(int _number) :number(_number), number2(0)
    {
        cout << "Normal constructor\n";
    }
    A()
    {
        cout << "Default constructor\n";
    }

    A(const A& source)
    {
        number = source.number;
        number2 = source.number2;
        cout << "Copy constructor\n";
    }

    A& operator= (const A& source)
    {
        number = source.number;
        number2 = source.number2;
        cout << "Assignment operator\n";
        return *this;
    }

    ~A()
    {
        cout << "Destructor\n";
    }

    int get()
    {
        return number;
    }
};