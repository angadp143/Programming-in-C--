/*1 2 3 4 5
6 7  9 10 11
12 13 14 15 16
17 18 19 20 21
22 23 24 25 26
27 28 29 30 31
32 33 34 35 36
37 38 39 40 41
42 43 44 45 46
47 48 49 50 */
#include <iostream>
using namespace std;
int main()
{
    int row, column;
    int count = 1;
    for (row = 1; row <= 10; row++)
    {
        for (column = 1; column <= 5; column++)
        {
            cout << count << " ";
            count = count + 1;
        }
        cout << endl;
    }
    return 0;
}