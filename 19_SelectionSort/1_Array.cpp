#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {11, 23, 43, 12, 33, 44, 55, 66, 32, 100};
    for (int i = 0; i < 9; i++)
    {
        int index = i;
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[j] < arr[index])
                index = j;
        }
        swap(arr[i], arr[index]);
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}