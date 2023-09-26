#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Animal
{
public:
    int age = 2;
    int food = 3;
};
int main()
{
    // Memory for variables is allocated at compile-time.
    // Memory allocation is done on the stack.
    Animal a;
    cout << a.age << " age" << endl;
    cout << a.food << " food" << endl;

    // Memory for variablesvariables is allocated at runtime (during program execution).
    // Memory allocation is done on the heap.
    Animal *b = new Animal;
    cout << (*b).age << " b ki age" << endl;
    cout << (*b).food << " b ka food" << endl;

    Animal *c = new Animal;
    cout << c->age << " b ki age" << endl;
    cout << c->food << " b ka food" << endl;
    return 0;
}