#include <iostream>
using namespace std;
int main()
{
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = n - 2; i >= 0; --i)
    {
        int key = arr[i];
        int j = i + 1;
        while (j < n && arr[j] < key)
        {
            arr[j - 1] = arr[j];
            j++;
        }
        arr[j - 1] = key;
    }
    cout << "Sorted array in increasing order (starting from the last element): ";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
