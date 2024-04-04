#include <iostream>
using namespace std;
int main()
{
    int ROWS = 3;
    int COLS = 4;
    int arr[ROWS][COLS] = {{1, 2, 3, 4},
                           {5, 6, 7, 8},
                           {9, 10, 11, 12}};
    cout << "Sum of each column:" << endl;
    for (int j = 0; j < COLS; ++j)
    {
        int sum = 0;
        for (int i = 0; i < ROWS; ++i)
        {
            sum += arr[i][j];
        }
        cout << "Column " << j + 1 << ": " << sum << endl;
    }
    return 0;
}
