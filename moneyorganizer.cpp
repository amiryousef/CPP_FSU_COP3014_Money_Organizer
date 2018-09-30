/*

    moneyorganizer.cpp

    Matt Porter
    COP3014
    Summer 2010
    Project 1 Solution

    This is an example solution to the problem here:
    http://ww2.cs.fsu.edu/~porter/cop3014/summer2010/projects/Project%201.htm
    
*/

#include <iostream>
#include <cstdlib>

int main()
{

    double input;
    size_t amount;

    //Ask for a monetary input.

    std::cout << "\n\nEnter amount:  $";
    std::cin >> input;

    //Convert the input to the number of cents. 
    
    amount = static_cast<size_t>((input * 100) + .1);

    //Print the number of dollars, quarters, dimes, nickels, and pennies.

    std::cout << "\nDollars:  " << amount / 100;
    amount %= 100;
    std::cout << "\nQuarters:  " << amount / 25;
    amount %= 25;
    std::cout << "\nDimes:  " << amount / 10;
    amount %= 10;
    std::cout << "\nNickels:  " << amount / 5;
    amount %= 5;
    std::cout << "\nPennies:  " << amount;

    return 0;

}
