#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {7, 6, 5, 4, 3, 2, 1};
    int start = 0, end = 6;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
}