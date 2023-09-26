#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class MyClass{
public:
    int number;
    MyClass(int num) : number(num)
    {
        cout << num;
    }
    void hello(string name){
        cout<<name;
    }
};

int main()
{
    MyClass obj(5);
    obj.hello("name");
    return 0;
}