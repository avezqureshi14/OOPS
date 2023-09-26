#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
 
//Private : Base class
//Public : Derived Class
//Resultant : Private

class Animal{
    private:
    int age;
    int height;
    string color;
};

class Dog : public Animal{
    public:
    string breed;
    void getAge(){
        cout<<"Getting the age from the private base class"<<age<<endl;
    }
};

*/


/*
//Private : Base class
//Protected : Derived class
//Resultant : Private

class Animal{
    private:
    int age;
    int height;
    string color;
};

class Dog : protected Animal{
    public:
    string breed;
    void getAge(){
        cout<<"Getting the age from the private base class"<<age<<endl;
    }
};

*/ 


//Private : Base class
//Private : Derived class
//Resultant : Private

/*
class Animal{
    private:
    int age;
    int height;
    string color;
};

class Dog : private Animal{
    public:
    string breed;
    void getAge(){
        cout<<"Getting the age from the private base class"<<age<<endl;
    }
};
*/

int main()
{
    return 0;
}