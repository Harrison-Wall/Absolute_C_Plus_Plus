/*
*   Harrison Wall
*   5/27/18
*   Absolute C++ 5th Edition
*   Chapter 2 - Problem 1
*   This program finds the prime numbers bewteen 3 and 100.
*/

#include <iostream>

int main (void)
{
    const int START = 3, STOP = 100;
    bool isPrime;

    std::cout << "The following numbers from " << START << " to " << STOP << " are prime: \n";

    for(int i = START; i <= STOP; i++)
    {
        isPrime = true;

        for(int j = 2; j < i; j++ )
        {
            //if any # evenly divides it then it is not prime
            if( i%j == 0 )
            {
                isPrime = false;
                break;
            }
        }

        if( isPrime )
            std::cout << i << std::endl;
    }

    return 0;
}