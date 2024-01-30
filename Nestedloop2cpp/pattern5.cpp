/*Fifth Pattern:

      A B C D
      A B C
      A B
      A*/

#include <iostream>

int main()
{
    int n;
    std::cout << "Enter the number of rows: ";
    std::cin >> n;

    for (int i = n; i > 0; --i)
    {
        char ch = 'A';

        for (int j = 0; j < i; ++j)
        {
            std::cout << ch << " ";
            ch++;
        }

        std::cout << std::endl;
    }

    return 0;
}
