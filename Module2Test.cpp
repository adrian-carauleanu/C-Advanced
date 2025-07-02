#pragma once
#include "Module2Test.h"

void module_2_q_2()
{
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5};
    string words[] = { "three", "nine", "zero", "two", "one", "four", "five" };

    map<A, string> m;

    for (int i = 0; i < 7; i++)
    {
        m.insert(pair<A, string>(A(mynumbers[i]), words[i]));
    }

    //m.erase(m.lower_bound(3), m.upper_bound(4)); Q2
    m.erase(m.lower_bound(2), m.upper_bound(5)); // Q6
    m.erase(m.lower_bound(2), m.upper_bound(5)); // Q6

    map<A, string>::iterator i = m.begin();

    for (; i != m.end(); i++)
        cout << i->second << ", ";
}

void module_2_q_11()
{
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    vector<int> v(mynumbers, mynumbers + 7);
    set<int> s1(v.begin(), v.end());
    s1.insert(v.begin(), v.end());
    s1.insert(10);
    s1.erase(s1.lower_bound(4), s1.upper_bound(6));
    s1.insert(v.begin(), v.end());
    for (set<int>::iterator i = s1.begin(); i != s1.end(); i++)
        cout << *i << ", ";

    cout << endl << "S1 size: " << s1.size();
}

void module_2_q_13()
{
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    string words[] = { "three", "nine", "zero", "two", "one", "four", "five" };

    multimap<int, string> m;

    for (int i = 0; i < 3; i++)
    {
        // m.push_back(pair<int, string>(mynumbers[i], words[i])); // multimap has no method push_back
    }
}

void module_2_q_14()
{
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    set<A> s(mynumbers, mynumbers + 7); // LINE II
    multiset<A> s1(s.begin(), s.end()); // LINE III

    s1.insert(s.begin(), s.end());
    s1.erase(s1.lower_bound(5), s1.upper_bound(2)); // LINE IV

    multiset<A>::iterator i = s1.begin();
    for (; i != s1.end(); i++)
        cout << i->getA() << ", ";

    cout << endl;
}