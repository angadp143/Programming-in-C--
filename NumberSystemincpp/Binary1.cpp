/*Write a program to convert binary numbers to decimal numbers .*/
#include <iostream>
using namespace std;
int main()
{
    int num, rem, ans = 0, mul = 1;
    cout << "Enter the value=";
    cin >> num;
    while (num > 0)
    {
        rem = num % 2;         // remainder
        num /= 2;              // quotient
        ans = rem * mul + ans; // answer
        mul = mul * 10;        // multiply
        cout << ans << endl;
    }
    return 0;
}