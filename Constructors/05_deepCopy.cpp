#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class DCopy
{
public:
    int *data;
    DCopy(int val)
    {
        this->data = new int(val); //as data itself is a pointer it stores the values of pointers 
        // cout<<*this->data; //we access pointer in this manner 
    }
    // now to create a deep copy we need to create our own copy constructor
    // other refers to the new object which will be created
    DCopy(DCopy &other)
    {
        this->data = new int(*other.data);
    }
};
int main()
{
    cout<<"Example of Deep Copy "<<endl<<endl;

    DCopy s1(10);
    DCopy s2(s1);

    cout << "Previous" << endl;
    cout << "We have maually assigned the values ";
    cout << *s1.data << endl;
    cout << "Copied Constructor ";
    cout << *s2.data << endl;

    *s1.data = 1;

    cout << endl;
    cout << endl;

    cout << "New" << endl;
    cout << "We have maually assigned the values ";
    cout << *s1.data << endl;
    cout << "Copied Constructor ";
    cout << *s2.data << endl;
    return 0;
}