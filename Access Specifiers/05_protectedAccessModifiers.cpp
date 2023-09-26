#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
//Protected : Base Class
//Public : Derived Class
//Resultant : Protected Class

class Animal{
    protected:
    int age;
    int height;
    string color;
};

class Dog : public Animal{
    public:
    string breed;
    void getAge(){
        cout<<"Getting the age of the protected base class"<<age<<endl;
    }
};
*/

/*
//Protected : Base Class
//Private : Derived Class
//Resultant : Private

class Animal{
    protected:
    int age;
    int height;
    string color;

};

class Dog : private Animal{
    public:
    string breed;
    void getAge(){
        cout<<"Getting the age of the protected base class"<<age<<endl;;
    }
};
*/

// Protected : Base class
// Protected : Derived class
// Resultant : Protected

class Animal
{
protected:
    int age;
    int height;
    string color;
};

class Dog : protected Animal
{
public:
    string breed;
    void getAge()
    {
        cout << "Getting the age of the protected base class " << age << endl;
    }
};

int main()
{
    Dog d;
    d.getAge();
    return 0;
}