#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_complement(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')  
        {
            cout << "Incorrect Binary Format" << endl;
            exit(0);
        }
    }
}

void binary ::ones_complement(void)
{
    chk_bin(); //nesting of member function
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary :: display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s[i];
    }
    cout<<endl;
}
int main()
{
    binary b;
    b.read();
    cout<<"Your Binary Number"<<endl;
    b.display();
    b.ones_complement();
    cout<<"Your Binary Number after 1's complement"<<endl;
    b.display();
    return 0;
}