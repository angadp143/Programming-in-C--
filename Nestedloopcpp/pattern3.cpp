/*Third Pattern:

    1 8 27 64 125 216
    1 8 27 64 125 216
    1 8 27 64 125 216
    1 8 27 64 125 216
    1 8 27 64 125 216 */

#include <iostream>
using namespace std;
int main()
{
    int row, column;
    for (row = 1; row <= 5; row++)
    {
        for (column = 1; column <= 6; column++)
        {
            cout << column * column * column << " ";
        }
        cout << endl;
    }
    return 0;
}