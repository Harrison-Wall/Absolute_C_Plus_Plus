/*
*   Harrison Wall
*   5/25/18
*   Absolute C++ 5th Edition
*   Chapter 1 - Problem 8
*   This program estimates sqaure roots by using the Babylonian Algorithim
*/

#include <iostream>

int main (void)
{
    double dSquare, dRoot, dGuess;

    //set output precision
    std::cout.setf(std::ios::fixed);
    std::cout.setf(std::ios::showpoint);
    std::cout.precision(2);

    std::cout << "Enter a  positive number: ";
    std::cin >> dSquare;

    dGuess = dSquare / 2;

    //Run the Babylonion Algorithim 5 times
    for( int i = 0; i < 10; i++ )
    {
        dRoot = dSquare / dGuess;
        dGuess += dRoot;
        dGuess /= 2;
    }

    std::cout << "The result of the Alogirithm is: " << dGuess << std::endl;

    return 0;
}