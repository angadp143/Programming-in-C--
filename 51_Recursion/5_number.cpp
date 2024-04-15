#include <iostream>
using namespace std;
void printNumbers(int n)
{
    if (n <= 0)
        return;
    printNumbers(n - 1);
    cout << n << " ";
}
int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Numbers from 1 to " << n << " are: ";
    printNumbers(n);
    cout << endl;
    return 0;
}
