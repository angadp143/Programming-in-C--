#include <iostream>
using namespace std;
int main()
{
    const int ROWS = 3;
    const int COLS = 3;
    int arr[ROWS][COLS] = {{9, 8, 7},
                           {6, 5, 4},
                           {3, 2, 1}};

    int smallest = arr[0][0];
    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLS; ++j)
        {
            if (arr[i][j] < smallest)
            {
                smallest = arr[i][j];
            }
        }
    }
    cout << "Smallest element in the array: " << smallest << endl;
    return 0;
}
