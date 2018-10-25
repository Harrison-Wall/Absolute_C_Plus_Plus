/*
*   Harrison Wall
*   5/28/18
*   Absolute C++ 5th Edition
*   Chapter 2 - Problem 1
*   This program solves a Cyrptarithmatic problem.
*/

#include <iostream>

int main (void)
{
    int T, O, G, D;

    for(T = 0; T < 10; T++ )
    {
        for(O = 0; O < 10; O++)
        {
            for(G = 0; G < 10; G++)
            {
                for(D=0; D < 10; D++)
                {
                    //TOO + TOO + TOO + TOO = GOOD (Isomorphic to Decimal numbers)
                    if( ((T*100)+(O*10)+O) + ((T*100)+(O*10)+O) + ((T*100)+(O*10)+O) + ((T*100)+(O*10)+O) == ((G*1000)+(O*100)+(O*10)+D) )
                    {
                        //None of them can be the same number
                        if( T != O && O != G && G != D )
                        {
                            std::cout << "\nT = " << T << " O = " << O << " G = " << G << " D = " << D << std::endl;
                        }
                        else
                        {
                            //NOP
                        }
                    }
                    else
                    {
                        //NOP
                    }
                }
            }
        }
    }

    return 0;
}