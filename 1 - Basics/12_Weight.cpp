/*
*   Harrison Wall
*   5/25/18
*   Absolute C++ 5th Edition
*   Chapter 1 - Problem 12
*   This progam calculated ideal weight based on height.
*/

#include <iostream>

int main(void)
{
    int iFeet, iInches, iWeight;

    std::cout << "Enter you height in Feet and inches: ";
    std::cin >> iFeet >> iInches;

    //Correct for improper inches
    if ( iInches >= 12 )
    {
        std::cout << "Too Many Inches!\n";
        iFeet += iInches / 12;
        iInches %= 12 ;
        std::cout << "New Height is: " << iFeet << " Feet, " << iInches << " inches.\n";
    }

    if( iFeet < 5 )
    {
        std::cout << "Sorry, we cannot calculate less than 5 feet.\n";
    }
    else
    {
        //Base line of 5 feet to 110 lbs.
        iFeet -= 5;
        iInches += iFeet * 12;

        //Every additional inch is 5 lbs.
        iWeight = 110 + (5 * iInches);

        std::cout << "Your Ideal Weight is: " << iWeight << " lbs\n";
    }

    return 0;
}