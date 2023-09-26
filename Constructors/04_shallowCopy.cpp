#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//this is the perfect example of shallow copy
class SCopy
{
public:
    int *data;

    SCopy(int val)
    {
        this->data = new int(val);
    }
};
int main()
{
    cout<<"Example of Shallow Copy "<<endl<<endl;
    SCopy s1(10);
    SCopy s2(s1);

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

//important point to remember
// In order to clearly see the effects of shallow copy, you need to use pointers or references in your class. When you work with value types (non-pointer, non-reference types), the default copy behavior provided by the compiler performs a deep copy, which means each object gets its own copy of the data, and changes in one object do not affect the other.