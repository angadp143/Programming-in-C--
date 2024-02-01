/*Fourth Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

            *
           *  *
         *  *  *
       *  *  *  *
     *  *  *  *  *
     *  *  *  *  *
      *  *  *  *
        *  *  *
          *  *
           *        */

#include <iostream>

void printPattern(int n)
{
    for (int i = 0; i < n; ++i)
    {
        // Print spaces
        for (int j = 0; j < n - i - 1; ++j)
        {
            std::cout << "  ";
        }
        for (int j = 0; j <= i; ++j)
        {
            std::cout << "* ";
        }

        std::cout << std::endl;
    }
    for (int i = n - 2; i >= 0; --i)
    {
        // Print spaces
        for (int j = 0; j < n - i - 1; ++j)
        {
            std::cout << "  ";
        }
        for (int j = 0; j <= i; ++j)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}
int main()
{
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    if (n <= 0)
    {
        std::cout << "Invalid input. Please enter a positive integer." << std::endl;
        return 1;
    }
    printPattern(n);
    return 0;
}
