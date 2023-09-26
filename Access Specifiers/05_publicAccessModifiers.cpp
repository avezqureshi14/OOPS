#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
//Public - Base Class
//Public - Derived Class
//Resultant - Public
class Animal{
    public:
    int age;
    int height;
    string color;
};

class Dog : public Animal{
    public:
    string breed;
};

*/
// Public - Base Class
// Private - Derived Class
// Resultant - Private

class Animal
{
public:
    int age;
    int height;
    string color;
};

class Dog : private Animal
{
public:
    string breed;
    // Now as it is inherited as private it can be used only within this class
    void getAge()
    {
        cout << "Getting the age from the Private Class " << age;
    }
};
/*

// Public - Base Class
// Private - Derived Class
// Resultant - Protected //Here int this case, Will be acting same as private of above class 

class Animal{
    public:
    int age;
    int height;
    string color;
};

class Dog : protected Animal{
    public:
    string breed;
    //We can us the protected ones only inside this class
    void getAge(){
        cout<<"Getting the age from the Protected Class "<<age;
    }

};
*/




int main()
{
    Dog d;
    return 0;
}