#include <iostream>
using namespace std;
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = n - 1; i > 0; --i)
    {
        int max_index = 0;
        for (int j = 1; j <= i; ++j)
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
    cout << "Sorted array in increasing order: ";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << std::endl;
    return 0;
}
