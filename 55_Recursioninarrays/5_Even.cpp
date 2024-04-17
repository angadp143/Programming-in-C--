#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {5, 3, 8, 10, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int evenCount = count_if(arr, arr + n, [](int x)
                             { return x % 2 == 0; });
    cout << "The number of even elements in the array is: " << evenCount << endl;
    return 0;
}
