/*
*   Harrison Wall
*   5/25/18
*   Absolute C++ 5th Edition
*   Chapter 1 - Problem 4
*   This program calculates loan balances & monthly payments.
*/

#include <iostream>

int main (void)
{
    float fAmount, fRate, fOwed;
    int iDuration;

    //Set ouput precision
    std::cout.setf(std::ios::fixed);
    std::cout.setf(std::ios::showpoint);
    std::cout.precision(2);

    std::cout << "Please Enter the loan amount: $" ;
    std::cin >> fAmount;

    std::cout << "Now Enter the interst rate and the duration in months: ";
    std::cin >> fRate
             >> iDuration;

    fOwed = fAmount * fRate * (iDuration/12.0);

    std::cout << "\nThe amount owed is: $" << fOwed << std::endl;
    std::cout << "That leaves you with: $" << fAmount - fOwed << std::endl;
    std::cout << "Your monthly payment is: $" << fAmount / iDuration << std::endl;

    return 0;
}