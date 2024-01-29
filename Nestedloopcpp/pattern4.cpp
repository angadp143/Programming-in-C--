/*
Fourth Pattern:

F G H I J K
F G H I J K
F G H I J K
F G H I J K
F G H I J K */

#include <iostream>
using namespace std;
int main()
{
    int row;
    char column;
    for (row = 1; row <= 5; row++)
    {
        for (column = 'F'; column <= 'K'; column++)
        {
            cout << column << " ";
        }
        cout << endl;
    }
    return 0;
}