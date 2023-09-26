 #include <iostream>
// the destructors of both the derived class and its base classes are called in the reverse order of their construction.
 class Base {
 public:
     Base() {
         std::cout << "Base constructor called." << std::endl;
     }

     ~Base() {
         std::cout << "Base destructor called." << std::endl;
     }
 };

 class Derived : public Base {
 public:
     Derived() {
         std::cout << "Derived constructor called." << std::endl;
     }

     ~Derived() {
         std::cout << "Derived destructor called." << std::endl;
     }
 };

 int main() {
     Derived derived;  // Object created

     // Object exists within this scope

     return 0;
 }
