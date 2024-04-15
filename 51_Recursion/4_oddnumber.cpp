#include <iostream>
using namespace std;
void printOddNumbers(int n)
{
    if (n < 1)
        return;
    if (n % 2 != 0)
        cout << n << " ";
    printOddNumbers(n - 2);
}
int main()
{
    printOddNumbers(10);
    return 0;
}
