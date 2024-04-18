#include <iostream>
using namespace std;
int sum(int arr[], int index)
{
    return arr[index];
}
int main()
{
    int arr[] = {7, 5, 3, 6};
    int total = 0;
    for (int i = 0; i < 4; i++)
        total += sum(arr, i);
    cout << total;
}