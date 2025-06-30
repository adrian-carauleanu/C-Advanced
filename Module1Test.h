#pragma once
#include <iostream>
#include <vector>
#include <deque>
#include <list>
using namespace std;

class A
{
public:
    int a;
public:
    A(int a) : a(a) {}
};

//ostream& operator<<(const A& o, ostream& c);
template <typename T> ostream & print(const T & start,const T & end);
ostream& operator<<(ostream& c, const A& o);
void fill(const int table[], unsigned size, vector<A*>& v);
void del(A* p);

//void module_1_test_4();
void module_1_test_5();
void module_1_test_6();
void module_1_test_7();

void module_1_test_13();