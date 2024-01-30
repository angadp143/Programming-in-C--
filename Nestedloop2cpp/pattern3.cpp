/*Third Pattern:

    A
    A B
    A B C
    A B C D
    A B C D E*/

#include <iostream>

int main()
{
    int n;
    std::cout << "Enter the number of rows: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i)
    {
        char ch = 'A';

        for (int j = 0; j <= i; ++j)
        {
            std::cout << ch << " ";
            ch++;
        }

        std::cout << std::endl;
    }

    return 0;
}
