/*Write a program to convert decimal numbers to binary numbers */
#include <iostream>
using namespace std;
int main()
{
    int num, ans = 0, rem, mul = 1;
    cout << "Enter the value=";
    cin >> num;
    while (num > 0)
    {
        rem = num % 10;        // remainder
        num = num / 10;        // number divide
        ans = rem * mul + ans; // answer
        mul = mul * 2;         // multiply
        cout << ans << endl;
    }
    return 0;
}