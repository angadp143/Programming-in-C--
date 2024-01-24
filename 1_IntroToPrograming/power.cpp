#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b, power;
    cout << "Enter two nmbers=";
    cin >> a >> b;
    power = pow(a, b);
    cout << "Power of two nmber" << power;
    return 0;
}