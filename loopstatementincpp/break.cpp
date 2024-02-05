/*Give a number n, find if it is prime or not, use a while loop and break here to solve it.*/
#include <iostream>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false; // 0 and 1 are not prime numbers
    }
    int divisor = 2; // Start with divisor 2
    while (divisor * divisor <= n)
    {
        if (n % divisor == 0)
        {
            return false; // If n is divisible by any number other than 1 and itself, it's not prime
        }
        divisor++;
    }
    return true; // If no divisor was found, n is prime
}
int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (isPrime(n))
    {
        cout << n << " is a prime number." << endl;
    }
    else
    {
        cout << n << " is not a prime number." << endl;
    }
    return 0;
}
