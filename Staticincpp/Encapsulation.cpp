#include <iostream>
using namespace std;
class customer
{
    string name;
    int account_number, balance, age;

public:
    customer(string name, int account_number, int balance, int age)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        this->age = age;
    }
    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
        }
    }
    void updateage(int age)
    {
        if (age > 0 && age < 100)
        {
            this->age = age;
        }
    }
    void withdraw(int amount)
    {
        if (amount <= balance && amount > 0)
        {
            balance -= amount;
        }
    }
    void show()
    {
        cout << name << " " << account_number << " " << balance << " " << age << endl;
    }
};
int main()
{
    customer A1("Raman", 1, 4000, 55);
    customer A2("Sonu", 2, 40000, 11);
    //customer A3("Sonam", 3, 5000, 16)
    A1.updateage(3);
    A1.deposit(5000);
    A1.show();
    A2.show();
}