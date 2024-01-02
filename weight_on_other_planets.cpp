// weight_on_other_planets.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {

    int earth_weight;
    int number_planet;

    std::cout << "Please input your earth weight: ";
    std::cin >> earth_weight;

    std::cout << "Please enter the planet you want to fight on: ";
    std::cin >> number_planet;

    switch (number_planet) {

    case 1:
        std::cout << "Your Mercury weight is: " << earth_weight * 0.38 << "\n";
        break;
    case 2:
        std::cout << "Your Venus weight is: " << earth_weight * 0.91 << "\n";
        break;
    case 3:
        std::cout << "Your Mars weight is: " << earth_weight * 0.38 << "\n";
        break;
    case 4:
        std::cout << "Your Jupiter weight is: " << earth_weight * 2.34 << "\n";
        break;
    case 5:
        std::cout << "Your Saturn weight is: " << earth_weight * 1.06 << "\n";
        break;
    case 6:
        std::cout << "Your Uranus weight is: " << earth_weight * 0.92 << "\n";
        break;
    case 7:
        std::cout << "Your Neptune weight is: " << earth_weight * 1.19 << "\n";
        break;
    default:
        std::cout << "Sorry, invalid input";
        break;

    }


    return 0;
}
