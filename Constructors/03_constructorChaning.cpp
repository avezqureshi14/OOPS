#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;
    std::string address;

public:
    // Constructor with full information
    Person(const std::string& n, int a, const std::string& addr)
        : name(n), age(a), address(addr) {
        std::cout << "Full constructor called" << std::endl;
    }

    // Constructor with only name and age
    Person(const std::string& n, int a)
        : Person(n, a, "Unknown") {
        std::cout << "Constructor with name and age called" << std::endl;
    }

    // Constructor with only name
    Person(const std::string& n)
        : Person(n, 0) {
        std::cout << "Constructor with name called" << std::endl;
    }

    // Default constructor
    Person()
        : Person("Unknown") {
        std::cout << "Default constructor called" << std::endl;
    }

    void display() const {
        std::cout << "Name: " << name << ", Age: " << age
                  << ", Address: " << address << std::endl;
    }
};
int main(){
   Person d("Avez",18,"Solapur"); //full constructor
   return 0;
}
