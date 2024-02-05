/*Find the factorial of a number n using a while loop and do a while loop.*/
#include <iostream>
using namespace std;
unsigned long long factorialUsingWhile(int n)
{
    unsigned long long factorial = 1;
    while (n > 1)
    {
        factorial *= n;
        n--;
    }
    return factorial;
}
unsigned long long factorialUsingDoWhile(int n)
{
    unsigned long long factorial = 1;
    do
    {
        factorial *= n;
        n--;
    } while (n > 1);
    return factorial;
}
int main()
{
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;
    if (n < 0)
    {
        cout << "Factorial is not defined for negative numbers.";
    }
    else
    {
        cout << "Factorial using while loop: " << factorialUsingWhile(n) << endl;
        cout << "Factorial using do-while loop: " << factorialUsingDoWhile(n) << endl;
    }
    return 0;
}
