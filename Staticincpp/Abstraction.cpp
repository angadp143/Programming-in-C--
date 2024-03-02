#include<iostream>
using namespace std;
class customer
{
    string name;
    int balance;
    public:
    customer(string a,int b)
    {
        name =a;
        balance=b;
    }
    void deposit(int amount)
    {
        if(amount>0)
        {
            balance+=amount;
        }
    }
    void show()
    {
        cout<<name<<" "<<balance<<endl;
    }
};
int main()
{
    customer A1("Shubham",5000);
    A1.deposit(5000);
    A1.show();
}