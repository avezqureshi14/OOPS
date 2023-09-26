#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    void getData()
    {
        cout << "I am A" << endl;
    }
};

class D {
    public:
    void getData(){
        cout<<"I am D"<<endl;
    }
};

class B : public  A
{
public:
   
};

class C : public A, public D
{
public:
   
};

int
main()
{
    C c;
    //to avoid ambiguity we are specifiying specific inherited class name to call getData()
    c.A::getData();
    c.D::getData();
    // c.getData();
    return 0;
}