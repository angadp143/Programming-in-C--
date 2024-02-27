#include <iostream>
using namespace std;
class customer
{
    string name;
    int *data;

public:
    customer(string name)
    {
        this->name = name;
        cout << name << endl;
    }
};
int main()
{
    customer A1("1"), A2("2"), A3("3");
}