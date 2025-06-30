//#include "cArray.h"
//#include <iostream>
//#include "Vector.h"
//#include "Deque.h"
//#include <list>


#include "Module1Test.h"

//void module_1_test_16()
//{
//    vector<int> v1(4, 3);
//    v1.push_back(4);
//    for (vector<int>::reverse_iterator i = v1.rbegin(); i != v1.rend(); ++i)
//    {
//        cout << *i << " ";
//    }
//    cout << endl;
//}
//
//void module_1_test_17()
//{
//    int tab[] = { 1,2,3,4,5,6,7,8,9,10 };
//    vector<int> v1(tab, tab + 10);
//    
//    vector<int>::const_iterator it = v1.begin() + 3;
//    v1.erase(it, it + 1);
//    print(v1.begin(), v1.end());
//    v1.empty();
//    cout << v1.size() << endl;
//}
//
//template <class T>
//void print2(T obj)
//{
//    for (auto value : obj)
//        cout << value << " ";
//    cout << endl;
//}
//
//class AM
//{
//public:
//    int a;
//    AM(int a) :a(a) {};
//};
//
//ostream& operator<< (const AM& o, ostream& c)
//{
//    c << o.a;
//    return c;
//}


int main()
{
    //Array arr;
    //arr.add(10);
    //arr.add(12);
    //arr.add(14);
    //arr.print();
    //arr.delItem(12);
    //arr.print();

    /*Array A(10);
    for (unsigned i = 0; i < A.getSize(); ++i)
    {
        A[i] = i;
    }
    
    for (unsigned i = 0; i < A.getSize(); ++i)
    {
        std::cout << A[i] << " ";
    }
    std::cout << "\n";

    A.print();*/

    /*for (int i = 0; i < arr.getSize(); ++i)
        std::cout << arr[i] << " ";*/

    //create_vectors();
    //lab_vectors_2();
    //stl_squential_containers_1_2_1_10();
    //stl_squential_containers_1_2_1_11();
    //stl_squential_containers_1_2_1_13();

    //lab_deque_1_2_1_19();
    //std::vector<int> v1;
    //for (int i = 0; i < 10; i++)
    //    v1.push_back(i);
    //v1.resize(4);

    //std::vector<int> v2(v1.begin()+1, v1.end()-1);

    //for (auto val : v1)
    //    cout << val << " ";

    //vector<int> v1;
    //deque<int> d1;
    //cout << "v1 size:" << v1.size() << endl;
    //cout << "d1 size:" << d1.size() << endl;
    //v1.push_back(1);
    //d1.push_back(3);
    //print2(v1);
    //print2(d1);
    //cout << "v1 size:" << v1.size()<< endl;
    //cout << "d1 size:" << d1.size() << endl;
    //v1.empty();
    //d1.empty();
    //print2(v1);
    //print2(d1);
    //cout << "v1 size:" << v1.size() << endl;
    //cout << "d1 size:" << d1.size() << endl;

    //int tab[] = { 1,2,3,4,5,6,7,8,9,10 };
    //vector<AM> v1(tab, tab + 10);
    //v1.insert(v1.end(), AM(0));
    //print(v1.begin(), v1.end()) << endl;
    //vector<int> v1(tab, tab + 10);
    //vector<int> v2;
    //list<int> l1(tab, tab + 10);
    //list<int>::const_iterator it = l1.begin() + 3;
    /*vector<int>::iterator it;
    for (it = v1.begin(); it != v1.end(); ++it)
    {
        v2.push_back(v1[v1.end() - it - 1]);
    }
    print(v2.rbegin(), v2.rend()) << endl;*/

    //module_1_test_16();
    //module_1_test_4();
    //module_1_test_5();
    //module_1_test_6();
    module_1_test_7();
    //module_1_test_13();
    return 0;
}