
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; ++i)
    {
        int max_index = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[j] > arr[max_index])
            {
                max_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[max_index];
        arr[max_index] = temp;
    }
    cout << "Sorted array in decreasing order: ";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
