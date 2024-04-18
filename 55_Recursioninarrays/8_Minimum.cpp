#include <iostream>
using namespace std;
int minelement(int arr[], int index)
{
    return arr[index];
}
int main()
{
    int arr[] = {7, 5, 3, 6};
    int num = arr[0];
    for (int i = 0; i < 4; i++)
    {
        num = min(num, minelement(arr, i));
    }
    cout << num;
}