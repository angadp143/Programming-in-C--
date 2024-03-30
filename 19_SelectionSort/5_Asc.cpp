#include <iostream>
using namespace std;

int main()
{
    char arr[] = {'z', 'b', 'a', 'c', 'f'};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[j] < arr[i])
            {
                // Swap arr[i] and arr[j]
                char temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    std::cout << "Sorted array in ascending order: ";
    for (int i = 0; i < n; ++i)
    {
        std::cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
