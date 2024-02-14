// Calculate the average of elements in an array of size 18
#include <iostream>
using namespace std;

int main()
{
    int arr[18];
    int sum = 0;
    double avg = 0.0;
    cout << "Enter 18 elements: " << endl;
    for (int i = 0; i < 18; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    avg = sum / 18.0;
    cout << "The average of the elements is: " << avg << endl;
    return 0;
}
