// Print Sum of cube of first n natural number
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; ++i)
    {
        sum += i * i * i;
    }

    cout << "Sum of cube of first " << n << " natural numbers is: " << sum << endl;

    return 0;
}
