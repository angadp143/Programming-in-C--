/*Temperature Range: Write a program that checks if a given temperature is suitable for swimming. If the temperature is between 70 and 90 (Excluded) degrees Fahrenheit print yes, else NO*/

#include <iostream>
int main()
{
    double temperature;
    std::cout << "Enter the temperature in Fahrenheit: ";
    std::cin >> temperature;
    if (temperature > 70 && temperature < 90)
    {
        std::cout << "Yes, the temperature is suitable for swimming." << std::endl;
    }
    else
    {
        std::cout << "No, the temperature is not suitable for swimming." << std::endl;
    }

    return 0;
}
