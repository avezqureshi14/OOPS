#include <iostream>

class Animal
{
public:
    virtual void sound()
    {
        std::cout << "Animal makes a sound." << std::endl;
    }
};

class Dog : public Animal
{
public:
    void sound() override
    {
        std::cout << "Dog barks." << std::endl;
    }
};

class Cat : public Animal
{
public:
    void sound() override
    {
        std::cout << "Cat meows." << std::endl;
    }
};

int main()
{
    Animal *animalPtr;

    Dog dog;
    Cat cat;

    animalPtr = &dog;
    animalPtr->sound(); // Output: Dog barks.

    animalPtr = &cat;
    animalPtr->sound(); // Output: Cat meows.

    return 0;
}
