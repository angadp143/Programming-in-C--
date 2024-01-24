#include <iostream>
using namespace std;

int main()
{

    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You are eligible to vote. Go ahead and cast your vote!" << endl;
    }
    else
    {
        cout << "Sorry, you are not eligible to vote. You must be at least 18 years old." << endl;
    }

    return 0;
}
