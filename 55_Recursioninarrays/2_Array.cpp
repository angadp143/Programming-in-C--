#include <iostream>
using namespace std;
void print(int arr[], int index)
{
    if (index == -1)
        return;
    print(arr, index - 1);
    cout << arr[index] << " ";
}
int main()
{
    int arr[] = {3, 4, 2, 1, 5};
    print(arr, 4);
}