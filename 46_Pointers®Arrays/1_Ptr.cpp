#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;
    cout<<arr<<endl;
    cout<<arr+0<<endl;
    cout<<&arr[0]<<endl;
    cout<<ptr<<endl;

    cout<<arr+1<<endl;
    cout<<&arr[1]<<endl;

    // Print the value of 0 index
    cout<<arr[1]<<endl;
    cout<<*arr<<endl;
}