#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    void getDataFromA()
    {
        cout << "I am A" << endl;
    }
};

class D {
    public:
    void getDataFromD(){
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
    c.getDataFromA();
    c.getDataFromD();
    return 0;
}