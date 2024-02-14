// Find the index of a specific element in an array, if the element is nor present, print -1. Ask the size of the array from the user and then implement it
#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;
    int arr[size];
    int element;
    cout << "Enter the element to be searched: " << endl;
    cin >> element;
    int index = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            index = i;
            break;
        }
    }
    cout << "The index of the element is: " << index << endl;
    return 0;
}
