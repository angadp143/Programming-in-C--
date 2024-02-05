/*Given a number n, print all the numbers from 1 to n(inclusive) which are not divisible by 3 and 5. (use Continue here).*/
#include <iostream>
using namespace std;
void printNumbersNotDivisibleByThreeAndFive(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            continue; // Skip numbers divisible by both 3 and 5
        }
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Numbers from 1 to " << n << " (inclusive) not divisible by 3 and 5 are:" << endl;
    printNumbersNotDivisibleByThreeAndFive(n);
    return 0;
}
