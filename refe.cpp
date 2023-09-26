#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    string name;
    int marks;

    Student()
    {
        roll = 10;
        marks = 10;
        cout<<"Constructor created"<<endl;
    }
};
int main()
{
    Student a;
    return 0;
}