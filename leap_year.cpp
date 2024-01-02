// leap_year.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {

    //ask the user to input their interested year:
    int inputted_year;
    std::cout << "Please enter the interesed year: ";
    std::cin >> inputted_year;

    //check if the inputted year is four digit:
    if (inputted_year >= 1000 && inputted_year < 10000) {
        std::cout << "Your inputted year is four-digited! \n";

        //Leap year check

        if ((inputted_year % 4 == 0 && inputted_year % 100 != 0) || (inputted_year % 400 == 0)) {
            std::cout << "A leap year! \n";
        }
        else {
            std::cout << "Not a leap year! \n";
        }

        //If not 4-digit inputted, stops the program.
    }
    else {
        std::cout << "Please enter a four-digit year: \n";
    }

    return 0;
}