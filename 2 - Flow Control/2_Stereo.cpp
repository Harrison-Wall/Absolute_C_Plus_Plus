/*
*   Harrison Wall
*   5/27/18
*   Absolute C++ 5th Edition
*   Chapter 2 - Problem 1
*   This program calculates how long in months it will take to pay off a loan.
*/

#include <iostream>

int main (void)
{
    float rate, cost, payment, interest, interestTotal;
    int months = 0;

    std::cout << "Enter the loan ammount, annual % interest rate, and monthly payment amount: ";
    std::cin >> cost >> rate >> payment;

    //convert from an annual to a monthly rate
    rate /= 1200;

    //set output format
    std::cout.setf(std::ios::fixed);
    std::cout.setf(std::ios::showpoint);
    std::cout.precision(2);

    do
    {
        //calculate the interest payment
        interest = rate * cost;
        interestTotal += interest;

        //std::cout << "Payment " << months+1 << " interest ammount: $" << interest << "  Total interest: $" << interestTotal << std::endl;

        //calculate the amount paid toward the debt
        cost -= (payment - interest);

        //std::cout << "\tAmount paid toward debt: $" << (payment - interest) << " amount still owed: $" << cost << std::endl;

        months++;
    }while (cost > 0);

    std::cout << "\nYou paid your loan in " << months << " months with an additional $" << interestTotal << " in interest.\n";
    
    return 0;
}