/*
*   Harrison Wall
*   5/28/17
*   Absolute C++ 5th Edition
*   Chapter 2 - Problem 12
*   This program tests Benford's Law
*/

#include <iostream>
#include <fstream>
#include <string>

int main (void)
{
    const int NUM_PLACES = 5;
    int useCounts[NUM_PLACES] = {0};
    float useTotal = 0.0;
    std::string dataPoint;
    std::ifstream inStream;

    inStream.open("Num_List.DATA");

    while( inStream >> dataPoint )
    {
        int size = dataPoint.length();

        //If there is a 1, keep count
        for(int i = 0; i < size; i++)
        {
            if(dataPoint.at(i) == '1')
            {
                useCounts[i]++;
                useTotal++;
            }
            else
            {
                //NOP
            }
                
        }
    }

    inStream.close();

    //set output formatting
    std::cout.setf(std::ios::fixed);
    std::cout.precision(0);

    //Print results
    for(int j = 0; j < NUM_PLACES; j++)
    {
        std::cout << j+1 << "'s Place : " << useCounts[j] << "\t" << (useCounts[j] / useTotal * 100) << "%\n";
    }
        
    return 0;
}