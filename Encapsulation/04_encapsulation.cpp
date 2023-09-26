#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class BankAccount{
    private:
        string accountNumber;
        string accountHolderName;
        double balance;
    public:
        BankAccount(string accountNumber, string accountHolderName, double balance){
            this->accountNumber = accountNumber;
            this->accountHolderName = accountHolderName;
            this->balance = balance;
        }


        void deposit(double amount){
            balance += amount;
        }

        void withdraw(double amount){
            if (balance >= amount)
            {
                balance -= amount;
            }
        }

        double getBalance(){
            return balance;
        }
};

int main()
{
    BankAccount myAccount("124531","Avez",100000);
    cout<<"Initial Balance "<<myAccount.getBalance()<<endl;
    myAccount.deposit(5000);
    cout<<"Incremented Balance "<<myAccount.getBalance()<<endl;
    myAccount.withdraw(2000);
    cout<<"Decremented Balance "<<myAccount.getBalance()<<endl;

    return 0;
}