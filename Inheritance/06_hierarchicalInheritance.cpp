#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class parent{
    public:
    int age;
    string color;
    void dad(){
    cout<<"I am your dad"<<endl;
    }
};

class child1 :  public parent{
    public:

};

class child2 : public parent{
    public:
};


int main()
{
    child1 c1;
    c1.dad();
    child2 c2;
    c2.dad();
    return 0;
}