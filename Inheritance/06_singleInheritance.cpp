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
};

int main()
{
    Dog d;
    d.speak();
    return 0;
}