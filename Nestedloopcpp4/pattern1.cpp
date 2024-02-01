/*First Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

            *
           *  *
         *  *  *
       *  *  *  *
     *  *  *  *  *  */

#include <iostream>
using namespace std;
int main()
{
    int n, row, col;
    cout << "Enter the number of rows=";
    cin >> n;
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n - row; col++)
        {
            cout << " ";
        }
        for (col = 1; col <= 2 * row - 1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}