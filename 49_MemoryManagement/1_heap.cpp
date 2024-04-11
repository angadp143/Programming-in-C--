#include <iostream>
using namespace std;
int main()
{
    int *ptr = new int;
    *ptr = 10;
    cout << *ptr << endl;
    float *ptr2 = new float;
    *ptr2 = 3.5;
    cout << *ptr2 << endl;
    int n;
    cin >> n;
    int *p = new int[n];
}