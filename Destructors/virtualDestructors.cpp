#include <iostream>
class Base
{
public:
    Base()
    {
        std::cout << "Base constructor called." << std::endl;
    }

    virtual ~Base()
    {
        std::cout << "Base virtual destructor called." << std::endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        std::cout << "Derived constructor called." << std::endl;
    }

    ~Derived()
    {
        std::cout << "Derived destructor called." << std::endl;
    }
};

int main()
{

    Derived d;

    return 0;
}
