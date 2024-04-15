#include <iostream>
using namespace std;
void printCoderArmy(int n)
{
    if (n > 0)
    {
        cout << "Coder Army" << endl;
        printCoderArmy(n - 1);
    }
}
int main()
{
    printCoderArmy(10);
    return 0;
}
