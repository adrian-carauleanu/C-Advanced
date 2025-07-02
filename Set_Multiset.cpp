#include "Set_Multiset.h"

template < class T > void
print(T start, T end)
{
    for (; start != end; ++start)
    {
        std::cout << *start << " ";
    }
}

void create_set()
{
    int t[] = { 1, 10, 8, 4, 6, 5, 3, 9, 7, 2 };
    set < int >s1(t, t + 10);
    set < int, greater < int >>s2(s1.begin(), s1.end());
    cout << "Standard iterator:\n";
    set < int >::iterator it1 = s1.begin();
    for (; it1 != s1.end(); ++it1)
    {
        cout << *it1 << " ";
    }
    cout << endl;
    it1 = s2.begin();
    for (; it1 != s2.end(); ++it1)
    {
        cout << *it1 << " ";
    }
    cout << endl;
    cout << "Reverse iterators:\n";
    print(s1.rbegin(), s1.rend());
    cout << endl;
    print(s2.rbegin(), s2.rend());
    cout << endl;

    cout << "Const iterators: \n";
    print(s1.cbegin(), s1.cend());
    cout << endl;
    print(s2.cbegin(), s2.cend());
    cout << endl;
    cout << "Const iterators - reverse: \n";
    print(s1.crbegin(), s1.crend());
    cout << endl;
    print(s2.crbegin(), s2.crend());
    cout << endl;

    /***********************************************************/
  //there is no difference between const and non const iterators
  // all set/multiset iterators are const regardless of declaration:
    set < int >::const_iterator cit1 = s1.begin();
    it1 = s1.cbegin();
    it1 = s1.begin();
    //  attempt to modify uncomment to test it;
    //*it1=100;
}

//      multiset
void create_multiset()
{
    int t[] = { 1, 10, 8, 4, 6, 5, 3, 9, 7, 2 };
    multiset < int >s1(t, t + 10);
    multiset < int, greater < int >>s2(s1.begin(), s1.end());
    cout << "Standard iterator:\n";
    multiset < int >::iterator it1 = s1.begin();
    for (; it1 != s1.end(); ++it1)
    {
        cout << *it1 << " ";
    }
    cout << endl;
    it1 = s2.begin();
    for (; it1 != s2.end(); ++it1)
    {
        cout << *it1 << " ";
    }
    cout << endl;
    cout << "Reverse iterators:\n";
    print(s1.rbegin(), s1.rend());
    cout << endl;
    print(s2.rbegin(), s2.rend());
    cout << endl;

    cout << "Const iterators: \n";
    print(s1.cbegin(), s1.cend());
    cout << endl;
    print(s2.cbegin(), s2.cend());
    cout << endl;
    cout << "Const iterators - reverse: \n";
    print(s1.crbegin(), s1.crend());
    cout << endl;
    print(s2.crbegin(), s2.crend());
    cout << endl;


    /***********************************************************/
  //there is no difference between const and non const iterators
  // all set/multiset iterators are const regardless of declaration:
    multiset < int >::const_iterator cit1 = s1.begin();
    it1 = s1.cbegin();
    it1 = s1.begin();
    //  attempt to modify uncomment to test it;
    //*it1=100;
}

void LAB_set_iterators()
{
    set<int> s1;
    set<int> s2;
    unsigned start_value;
    cout << "Start value: ";
    cin >> start_value;
    unsigned stop_value;
    cout << "Stop value: ";
    cin >> stop_value;

    //your code
    for (int i = start_value; i <= stop_value; ++i)
    {
        if (i % 2 == 0)
        {
            s2.insert(i);
        }
        else
        {
            s1.insert(i);
        }
    }

    for (int i = start_value; i <= stop_value; ++i)
    {
        if (i % 2 == 0)
        {
            s1.insert(i);
        }
        else
        {
            s2.insert(i);
        }
    }

    for (set<int>::iterator it1 = s1.begin(); it1 != s1.end(); ++it1)
    {
        for (set<int>::iterator it2 = s2.begin(); it2 != s2.end(); ++it2)
        {
            cout << *it1 + *it2 << " ";
        }
        cout << endl;
    }

    for (set<int>::reverse_iterator it1 = s1.rbegin(), it2 = s2.rbegin(); it1 != s1.rend(), it2 != s2.rend(); ++it1, ++it2)
    {
        cout << *it1 + *it2 << " ";
    }
    cout << endl;
    for (auto it1 = s1.rbegin(), it2 = s2.rbegin(); it1 != s1.rend(), it2 != s2.rend(); ++it1, ++it2)
    {
        cout << *it1 + *it2 << " ";
    }

    cout << endl;
}

void set_multiset_2_2_1_10()
{
    int t[] = { 2, 10, 8, 4, 5, 5, 3, 10, 7, 2 };
    multiset < int >s1(t, t + 10);
    set < int >s2(s1.begin(), s1.end());
    cout << "Multiset:\n";
    cout << "Size: " << s1.size() << " Max size: " << s1.max_size() << endl;
    print(s1.begin(), s1.end());
    cout << endl;
    cout << "Set:\n";
    cout << "Size: " << s2.size() << " Max size: " << s2.max_size() << endl;
    print(s2.begin(), s2.end());
    cout << endl;

    cout << "Deleting all elements from the multiset\n";
    s1.clear();
    if (s1.empty())
    {
        cout << "Multiset is empty!\n";
    }
    else
    {
        print(s1.begin(), s1.end());
        cout << endl;
    }

    if (s2.empty())
    {
        cout << "Set is empty!\n";
    }
    else
    {
        print(s2.begin(), s2.end());
        cout << endl;
    }
}