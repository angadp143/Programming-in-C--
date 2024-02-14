// Find the second largest element in an array of unique elements of size n. Where n>3.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int largest = arr[0];
    int second_largest = -1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }
    if (second_largest == -1)
    {
        cout << "The second largest element does not exist" << endl;
    }
    else
    {
        cout << "The second largest element is: " << second_largest << endl;
    }
    return 0;
}
