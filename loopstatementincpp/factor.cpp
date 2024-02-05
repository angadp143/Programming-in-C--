#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter the value you want factor of that number=";
    cin >> n;
    i = 1;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << i << endl;
        }
        i++;
    }
    return 0;
}