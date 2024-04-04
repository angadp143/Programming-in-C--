#include <iostream>
using namespace std;
int main()
{
    const int ROWS = 3;
    const int COLS = 3;
    int arr[ROWS][COLS] = {{1, 2, 3},
                           {4, 5, 6},
                           {7, 8, 9}};

    int largest = arr[0][0];
    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLS; ++j)
        {
            if (arr[i][j] > largest)
            {
                largest = arr[i][j];
            }
        }
    }
    cout << "Largest element in the array: " << largest << endl;
    return 0;
}
