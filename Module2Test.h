#pragma once
#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <string>
#include <list>
using namespace std;

class A
{
public:
    int a;
public:
    A(int a) : a(a) {}

    int getA() const
    {
        return a;
    }

    bool operator< (const A& b) const
    {
        return a < b.a;
    }
};

void module_2_q_2();
void module_2_q_11();
void module_2_q_13();
void module_2_q_14();