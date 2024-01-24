#include <iostream>
using namespace std;

int main()
{

    double base, height;

    cout << "Enter the length of the base of the triangle: ";
    cin >> base;

    cout << "Enter the height of the triangle: ";
    cin >> height;
    double area = base * height;

    cout << "The area of the triangle is: " << area << endl;

    return 0;
}
