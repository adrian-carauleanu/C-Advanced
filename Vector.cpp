#include "Vector.h"

using namespace std;

void
create_vectors()
{
    vector < int >v1(10);
    vector < int >v2 = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    for (unsigned i = 0; i < v1.size(); ++i)
    {
        v1[i] = i;
    }
    for (unsigned i = 0; i < v1.size(); ++i)
    {
        cout << v1[i] << " ";
        cout << v2[i] << " ";
    }
    cout << endl;

    cout << v1.size() << endl;
    v1.push_back(100);
    cout << v1.size() << endl;
    v1.pop_back();
    cout << v1.size() << endl;
}

void
lab_vectors()
{
    vector < int >v(8);
    for (unsigned i = 0; i < v.size(); ++i)
    {
        v[i] = i * 2;
    }
    for (unsigned i = 0; i < v.size(); ++i)	//simplify
    {
        cout << v[i] << " ";
    }

    for (auto val: v)
        cout << val << " ";

    cout << endl;

    cout << v.size() << endl;
    v.push_back(42);
    cout << v.size() << endl;
    v.pop_back();
    cout << v.size() << endl;
}

void
lab_vectors_2()
{
    vector <float> v1(5);
    cout << "Give a floating point number: ";
    cin >> v1[0];
    v1[1] = v1[0] + 5.;
    v1[2] = v1[0] + 0.5;
    v1[3] = v1[0] + 2.3;
    v1[4] = v1[0] + 4.7;

    float sum = 0, agv = 0;
    for (auto val : v1)
    {
        sum += val;
    }
    
    cout << "sum: " << sum << endl;
    cout << "avg:" << sum / 5 <<endl;
}

void stl_squential_containers_1_2_1_10()
{
    vector < A > v1(1);		//(1)
    v1.push_back(1);		//(2)
    v1[0] = 10;			//(3)
}

void stl_squential_containers_1_2_1_11()
{
    vector < A > v1;		//(1)
    v1.push_back(1);		//(1)

    for (auto val : v1)
        cout << val.get();
    //cout << "First ready!\n";
    ////copy constructor
    //vector < A > v2(v1);		//(2)
    //cout << "Second ready!\n";
    ////assignment operator - empty target
    //vector < A > v3;		//(3)
    //v3 = v2;			//(3)
    //cout << "Third ready!\n";
    ////assignment - not empty target
    //vector < A > v4(2);		//(4)
    //v4 = v2;			//(4)
}

void stl_squential_containers_1_2_1_13()
{
    vector < A* >v1;
    v1.push_back(new A(1));
    cout << "First ready!\n";
    v1.push_back(new A(2));
    cout << "Second ready!\n";
    v1.push_back(new A(3));
    cout << "Third ready!\n";
}