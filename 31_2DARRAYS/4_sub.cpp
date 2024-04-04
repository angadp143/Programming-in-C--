#include <iostream>
using namespace std;
int main()
{
    const int ROWS = 3;
    const int COLS = 3;
    int A[ROWS][COLS] = {{1, 2, 3},
                         {4, 5, 6},
                         {7, 8, 9}};

    int B[ROWS][COLS] = {{9, 8, 7},
                         {6, 5, 4},
                         {3, 2, 1}};

    int result[ROWS][COLS];
    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLS; ++j)
        {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
    cout << "Result of A - B:" << endl;
    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLS; ++j)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
