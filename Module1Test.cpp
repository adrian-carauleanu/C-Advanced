#include "Module1Test.h"
#include <algorithm>
template <typename T> ostream & print(const T& start, const T& end)
{
    T tmp = start;
    for (; tmp != end; ++tmp)
        cout << *tmp << " ";
    return cout;
}
//
//ostream& operator<<(const A& o, ostream& c)
//{
//    c << o.a;
//    return c;
//}

ostream& operator<<(ostream& c, const A &o)
{
    c << o.a;
    return c;
}


void fill(const int table[], unsigned size, vector<A*>& v)
{
    for (unsigned i = 0; i < size; ++i)
    {
        v.push_back(new A(table[i]));
    }
}
void del(A* p) { delete p; };

//void module_1_test_4()
//{
//    int tab[] = { 1,2,3,4,5,6,7,8,9,10 };
//    vector<A> v1(tab, tab + 10);
//    v1.insert(v1.end(), A(0));
//    print(v1.begin(), v1.end()) << endl;
//}

void module_1_test_5()
{
    int tab[] = { 1,2,3,4,5,6,7,8,9,10 };
    deque<int> d1(tab, tab + 10);
    deque<int> d2;

    while (!d1.empty())
    {
        d2.push_front(d1.back());
        d1.pop_front();
    }

    print(d2.begin(), d2.end()) << ": " << d2.size() << endl;
}

void module_1_test_6()
{
    int tab[] = { 1,2,3,4,5,6,7,8,9,10 };
    vector<int> v1(tab, tab + 10);
    vector<int> v2;

    vector<int>::iterator it;
    for(it = v1.begin(); it != v1.end(); ++it)
    {
        v2.push_back(v1[v1.end() - it - 1]);
    }

    print(v2.rbegin(), v2.rend()) << endl;
}

void module_1_test_7()
{
    int tab[] = { 1,2,3,4,5,6,7,8,9,10 };
    vector<A*> v1;
    fill(tab, 10, v1);
    print(v1.rbegin(), v1.rend()) << endl;
    for_each(v1.begin(), v1.end(), del);
}


void module_1_test_13()
{
    int tab[] = { 1,2,3,4,5,6,7,8,9,10 };
    list<A> l1(tab, tab +10);
    list<A> l2;
    list<A>::iterator it;
    for (it = l1.begin(); it != l1.end(); ++it)
    {
        l2.push_front(*it);
    }
    print(l2.begin(), l2.end()) << endl;

}

void module_1_test_14()
{
    int tab[] = { 1,2,3,4,5,6,7,8,9,10 };
    list<int> l1(tab, tab + 10);
    
    //list<int>::const_iterator it = l1.begin() ;
    //l1.erase(it, advance(it, 1));
    print(l1.begin(), l1.end());
    l1.clear();
    cout << l1.size() << endl;
}