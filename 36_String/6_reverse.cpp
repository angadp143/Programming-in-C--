#include <iostream>
using namespace std;
int main()
{
    string s = "Angad";
    int start = 0, end = s.size() - 1;
    while (start < end)
    {
        swap(s[start], s[end]); // Corrected typo here
        start++, end--;
    }
    cout << s;
    return 0;
}
