#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Calculator
{
public:
    void add(int a, int b)
    {
        cout << a + b;
    }
    void add(int a, int b, int c)
    {
        cout << a + b + c;
    }
};
int main()
{
    Calculator c;
    c.add(1, 2);
    c.add(1, 2, 3);
    return 0;
}