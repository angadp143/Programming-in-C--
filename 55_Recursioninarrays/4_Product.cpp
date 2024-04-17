#include <iostream>
#include <numeric>
using namespace std;
main()
{
    int arr[] = {5, 3, 8, 10, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    long long product = accumulate(arr, arr + n, 1LL, multiplies<long long>());
    cout << "The product of all elements in the array is: " << product << endl;
    return 0;
}
