#include <iostream>
#include <algorithm>
using namespace std;
bool compare(int a, int b)
{
    return a > b;
}
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n, compare);
    cout << "Sorted array in decreasing order: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
