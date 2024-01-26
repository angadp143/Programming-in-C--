// Print n’th Fibonacci number.
#include <iostream>

using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
        return n;
    int a = 0, b = 1;
    for (int i = 2; i <= n; ++i)
    {
        int temp = b;
        b = a + b;
        a = temp;
    }
    return b;
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;

    return 0;
}
