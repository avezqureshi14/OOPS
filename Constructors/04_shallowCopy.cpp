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
    SCopy sd1(10);
    cout << "Previous" << endl;
    cout << "We have maually assigned the values ";
    cout << *sd1.data << endl;
    SCopy sd2(sd1);
    cout << "Copied Constructor ";
    cout << *sd2.data << endl;
    *sd1.data = 1;
    cout << endl;
    cout << endl;
    cout << "New" << endl;
    cout << "We have maually assigned the values ";
    cout << *sd1.data << endl;
    cout << "Copied Constructor ";
    cout << *sd2.data << endl;

    return 0;
}