#include <iostream>
using namespace std;
int sum(int arr[], int index, int n)
{
    if (index == n)
        return 0;
    return arr[index] + sum(arr, index + 1, n);
}
int main()
{
    int arr[] = {7, 5, 3, 6};
    cout << sum(arr, 0, 4) << endl;
}