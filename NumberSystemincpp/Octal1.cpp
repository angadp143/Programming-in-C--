/*Write a program to convert Octal numbers to decimal numbers.*/
#include <iostream>
using namespace std;
int main()
{
    int num, rem, ans = 0, mul = 1;
    cout << "Enter the value=";
    cin >> num;
    while (num > 0)
    {
        rem = num % 8;         // remainder
        num /= 8;              // quotient
        ans = rem * mul + ans; // answer
        mul = mul * 10;        // multiply
        cout << ans << endl;
    }
    return 0;
}