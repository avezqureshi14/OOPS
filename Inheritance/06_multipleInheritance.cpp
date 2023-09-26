#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Animal{
    public:
    string breed;
    int age;
    void bark(){
        cout<<"The animal is barking"<<endl;
    }
};

class Human{
    public:
    int age;
    string manners;
    void speak(){
        cout<<"The animal is speaking"<<endl;
    }
};

class Stan : public Human, public Animal{
    public:
    
};


int main()
{
    Stan a;
    a.speak();
    a.bark();
    return 0;
}