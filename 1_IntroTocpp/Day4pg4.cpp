// There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So print all the numbers from 220 to 730 which follow the AP.
#include <iostream>
using namespace std;
int main()
{
    int p;
    for (p = 220; p <= 730; p = p + 7)
    {
        cout << p << endl;
    }
    return 0;
}