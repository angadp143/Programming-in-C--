#include <iostream>
using namespace std;
int main()
{
    int arr[6] = { 3,6,7,4,9,1 };
     int ans = INT_MIN;
    // Max value
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > ans)
        {
            ans = arr[i];
        }
    }
    cout << ans;
    return 0;
}