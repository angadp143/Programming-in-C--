// Find the third smallest element in an array of unique elements size n. Where n>3.
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
    int first = INT_MAX, second = INT_MAX, third = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] < second)
        {
            third = second;
            second = arr[i];
        }
        else if (arr[i] < third)
        {
            third = arr[i];
        }
    }
    if (third == INT_MAX)
    {
        cout << "The third smallest element does not exist" << endl;
    }
    else
    {
        cout << "The third smallest element is: " << third << endl;
    }
    return 0;
}
