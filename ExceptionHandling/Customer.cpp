#include<iostream>
using namespace std;
class customer
{
    string name;
    int balance,account_number;
    public:
    customer(string name,int balance, int account_number)
    {
        this->name=name;
        this->balance=balance;
        this->account_number=account_number;
    };
    //deposit
    void deposit(int amount)
    {
        if(amount>0)
        {
            balance+=amount;
            cout<<amount<<" is credited successfully\n";
        }
        else
        {
            throw"amount should be greater than 0\n";
        }
    }
    //withdraw
    void withdraw(int amount)
    {
        if(amount>0&&amount<=balance)
        {
            balance-=amount;
        cout<<amount<<" is debited successfullly";
        }
        else if(amount<0)
        {
            throw"amount should be greater than 0";
        }
        else
        {
            throw"Your balance is low\n";
        }
        
    }
};
int main()
{
    customer c1("sachin",5000,10);
    try
    {
        c1.deposit(100);
    c1.withdraw(6000);
    }
    catch(const char *e)
    {
        cout<<"Enception occured:"<<e<<endl;
    }
}
        