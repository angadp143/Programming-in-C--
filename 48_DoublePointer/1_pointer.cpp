#include<iostream>
using namespace std;
int main()
{
    int n = 10;
    int *p = &n;
    int **p2 = &p;
    cout<<p<<endl;
    cout<<p2<<endl;
}