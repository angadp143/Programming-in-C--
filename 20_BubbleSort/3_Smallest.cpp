#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = n - 1; i > 0; i--)
    {
        for (int j = n - 1; j > n - i - 1; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
        }
    }
    cout << "Sorted array in increasing order: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
