#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class LearnDStruct{
    public:
    
    int data;
    LearnDStruct(int val){
        this->data = val;
    }
    ~LearnDStruct(){
        cout<<"Destructor Called"<<endl;
    }
};
int main()
{
    //this is satistically allocated objected and for this destructor gets called automatically
    LearnDStruct d1(5);
    cout<<d1.data<<endl;

    //this is dynamically allocated object and for this destructor needs to be called manually 
    LearnDStruct *d2 = new LearnDStruct(8);
    delete(d2); //here when we are freeing the memory the destructor is been called  
    return 0;
}

//const keyword for object creation and function creatopm
// intialisation list
//static keyword and static functions 