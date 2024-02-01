/*Third Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.


              A
          A B A
       A B C B A
    A B C D C B A
 A B C D E D C B A      */

#include <iostream>

void printPattern(int n)
{
   for (int i = 0; i < n; ++i)
   {
      for (int j = 0; j < n - i - 1; ++j)
      {
         std::cout << "   ";
      }
      for (int j = 0; j <= i; ++j)
      {
         std::cout << char('A' + j) << "  ";
      }
      for (int j = i - 1; j >= 0; --j)
      {
         std::cout << char('A' + j) << "  ";
      }
      std::cout << std::endl;
   }
}
int main()
{
   int n;
   std::cout << "Enter the size of the pattern: ";
   std::cin >> n;
   if (n <= 0)
   {
      std::cout << "Invalid input. Size must be a positive integer." << std::endl;
      return 1;
   }
   printPattern(n);
   return 0;
}
