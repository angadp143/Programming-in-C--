#include <iostream>
using namespace std;
class customer
{
    string name;
    int account_number;
    int balance;

public:
    customer()
    {
        name = "Angad";
        account_number = 6;
        balance = 300;
    }
    customer(string a, int b, int c) // Constructor overloading
    {
        name = a;
        account_number = b;
        balance = c;
    }
    //  inline cunstructor(string a,int b,int c):name(a),account_number(b),balance(c);{}    //inline comstructor
    void show()
    {
        cout << name << " " << account_number << " " << balance << endl;
    }
    customer(customer &B) // Copy Constructor
    {
        name = B.name;                     // Copy Constructor
        account_number = B.account_number; // Copy Constructor
        balance = B.balance;               // Copy Constructor
    }
};
int main()
{
    customer A1;
    customer A2("Shivam", 24, 600);
    A1.show();
    A2.show();
    customer A3(A2);  // Copy Constructor
    A3.show();        // Copy Constructor
}
