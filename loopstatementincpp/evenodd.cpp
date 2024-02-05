/* Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while and do while loop separately.*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 1;
    cout << "Even numbers between 1 and " << n << " are: ";
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
        i++;
    }

    cout << endl;
    return 0;
}
