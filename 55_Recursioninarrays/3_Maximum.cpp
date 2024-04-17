#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {5, 3, 8, 10, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *maxElement = max_element(arr, arr + n);
    int maximum = *maxElement;
    cout << "The maximum element in the array is: " << maximum << endl;
    return 0;
}
