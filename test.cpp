#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Dog{
    
    public:
    int health;
    int age;
        Dog(int val){
            this->age = val;
        }
        Dog(int val1, int val2) : Dog(val1){
            this->age = val1;
            this->health = val2;
        }
};
int main()
{
    Dog dg(1,3);
    return 0;
}