/*
*   Harrison Wall
*   5/25/18
*   Absolute C++ 5th Edition
*   Chapter 1 - Problem 12
*   This progam calculates ideal weight based on height.
*       - It now reads input from a file
*/

#include <iostream>
#include <fstream>
#include <string>

int main(void)
{
    int iFeet, iInches, iWeight;
    std::string firstName, lastName;

    std::ifstream inStream;

    inStream.open("Weights.DATA");

    while( true )
    {
        inStream >> firstName >> lastName >> iFeet >> iInches;

        //Only works after attempting to read at the EOF
        if( inStream.eof() ) break;

        //Correct for improper inches
        if ( iInches >= 12 )
        {
            iFeet += iInches / 12;
            iInches %= 12 ;
        }

        //Base line of 5 feet to 110 lbs.
        iFeet -= 5;
        iInches += iFeet * 12;

        //Every additional inch is 5 lbs.
        iWeight = 110 + (5 * iInches);

        std::cout << firstName << " " << lastName << std::endl;
        std::cout << "\tIdeal Weight is: " << iWeight << " lbs\n";
    }

    inStream.close();

    return 0;
}