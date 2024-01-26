//Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.
#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    if (num1 > num2)
    {
        cout << "Bigger number is: " << num1 << endl;
    }
    else
    {
        cout << "Bigger number is: " << num2 << endl;
    }

    return 0;
}
