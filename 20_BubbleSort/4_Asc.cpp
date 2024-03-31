#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
    char arr[] = "bubble";
    sort(arr, arr + strlen(arr));
    cout << "Sorted array in ascending order: " << arr << endl;
    return 0;
}
