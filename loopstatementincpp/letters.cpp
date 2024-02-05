/*Print all the Capital and small letters  using a while loop. It means A-Z, then a-z.*/
#include <iostream>
using namespace std;
int main()
{
    char capital_letter = 'A';
    char small_letter = 'a';
    cout << "Capital letters (A-Z): ";
    while (capital_letter <= 'Z')
    {
        cout << capital_letter << " ";
        capital_letter++;
    }
    cout << endl;
    cout << "Small letters (a-z): ";
    while (small_letter <= 'z')
    {
        cout << small_letter << " ";
        small_letter++;
    }
    cout << endl;
    return 0;
}
