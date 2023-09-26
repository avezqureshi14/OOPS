#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Person{
    public:
    
    void hello(){
        cout<<"I am Person "<<n<<endl;
    }

    Person(const Person&other){
        n = other.n;
    }
};


int main()
{
    Person person1;
    Person person2 = person1;

    person1.hello(1);
    person2.hello(2);
    return 0;
}