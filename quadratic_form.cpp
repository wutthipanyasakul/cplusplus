//Project 3:
//Write a C++ program called quadratic.cpp that solves the quadratic equation for the x‘s:

#include <iostream>
#include <cmath>


int main() {
	//Getting the a,b, c:
	double a;
	double b;
	double c;

	std::cout << "Enter a: ";
	std::cin >> a;

	std::cout << "Enter b: ";
	std::cin >> b;
	std::cout << "Enter c: ";
	std::cin >> c;

	//Solving for the roots:
	double root1;
	double root2;



	//positive root
	root1 = (-b + std::sqrt(b * b - 4 * a * c)) / (2 * a);

	//negative root

	root2 = (-b - std::sqrt(b * b - 4 * a * c)) / (2 * a);

	std::cout << "Root 1 is: " << root1 << "\n";
	std::cout << "Root 2 is: " << root2 << "\n";

	return 0;


}
