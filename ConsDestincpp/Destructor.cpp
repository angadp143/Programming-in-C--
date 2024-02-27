#include <iostream>
using namespace std;
class customer
{
    string name;
    int *data;

public:
    customer()
    {
        name = "Angad";
        data = new int;
        *data = 11;
        cout << "constructor is called";
    }
    ~customer() // Destructor
    {
        cout << "Destructor is called";
    }
};
int main()
{
    customer A1;
}