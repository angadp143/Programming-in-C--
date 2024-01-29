/*First Pattern:

       4 4 4 4 4 4
       4 4 4 4 4 4
       4 4 4 4 4 4
       4 4 4 4 4 4
       4 4 4 4 4 4*/

#include <iostream>
using namespace std;
int main()
{
    int j, i;
    for (j = 1; j <= 6; j++)
    {
        for (i = 1; i <= 6; i++)
        {
            cout << 4 << " ";
        }
        cout << endl;
    }
    return 0;
}