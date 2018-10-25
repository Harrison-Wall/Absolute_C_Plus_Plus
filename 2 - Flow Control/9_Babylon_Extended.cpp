/*
*   Harrison Wall
*   5/28/18
*   Absolute C++ 5th Edition
*   Chapter 2 - Problem 9
*   This program estimates sqaure roots by using the Babylonian Algorithim
*       - Now it will loop until two answers are within 1% of each other.
*/

#include <iostream>

int main (void)
{
    double dSquare, dRoot, dGuess, prevGuess = 0.0;

    //set output precision
    std::cout.setf(std::ios::fixed);
    std::cout.setf(std::ios::showpoint);
    std::cout.precision(2);

    std::cout << "Enter a  positive number: ";
    std::cin >> dSquare;

    dGuess = dSquare / 2;

    //Run the Babylonion Algorithim
    do
    {
        dRoot = dSquare / dGuess;
        dGuess += dRoot;
        dGuess /= 2;

        //Loop until two guesses are within 1% of each other
        if( dGuess == prevGuess )
        {
            break;
        }
        else
        {
            prevGuess = dGuess;
        }
    }
    while(true);

    std::cout << "The result of the Alogirithm is: " << dGuess << std::endl;

    return 0;
}