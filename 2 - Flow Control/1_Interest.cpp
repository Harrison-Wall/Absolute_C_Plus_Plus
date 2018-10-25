/*
*   Harrison Wall
*   5/27/18
*   Absolute C++ 5th Edition
*   Chapter 2 - Problem 1
*   This program calculates the future price of an item given its cost, and the current interest rate.
*/

#include <iostream>

int main (void)
{
    const int CURR_YEAR = 2018;
    int iFutureYear;
    float fRate, fCost;

    std::cout << "Enter the cost of the item, the % interest rate, and the year of purchase: ";
    std::cin >> fCost >> fRate >> iFutureYear;

    //convert percent to decimal
    fRate /= 100;

    for(iFutureYear; iFutureYear > CURR_YEAR; iFutureYear--)
    {
        fCost += fCost * fRate;
    }

    //Set up output formatting
    std::cout.setf(std::ios::fixed);
    std::cout.setf(std::ios::showpoint);
    std::cout.precision(2);

    std::cout << "\nThe estimated cost of the item then is: $ " << fCost << std::endl;

    return 0;
}