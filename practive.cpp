#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class MyClass
{
public:
    int number;
    //default constructor dies when any constructor is created
    MyClass(int num)
    {
        //this is pointing towards the object
        this->number = num;
    }
    // shallow
    //if it is not passed by reference then it will be stucked in infinte loop
    //when we create our own copy constructor the default copy constructor dies
    MyClass(const MyClass &other)
    {
        // this->number = other.number;
        number = other.number;
    }
};

class DeepClass
{
public:
    int *data;
    DeepClass(int value)
    {
        this->data = new int(value);
    }

    DeepClass(const DeepClass&other){
        data = new int(*(other.data));
    }
};

int main()
{
    MyClass a(5);
    MyClass b = a;
    cout << &a.number << endl;
    cout << &b.number<<endl;


    DeepClass c(8);
    cout<<c.data<<endl; //to print pointer
    DeepClass d = c;
    cout<<d.data<<endl; //to print pointer

    return 0;
}