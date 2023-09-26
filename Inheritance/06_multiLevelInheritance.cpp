#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Animal{
    public:
    int age;
    int weight;

    void speak(){
        cout<<"Yeah! i am speaking"<<endl;
    }
};


class Dog : public Animal{
    public:
    void barking(){
        cout<<"Yeah I am Barking!"<<endl;
    }

};

class Shepherd : public Dog{
    public:
    
};


int main()
{
    Shepherd s;
    s.speak();
    s.barking();
    return 0;
}