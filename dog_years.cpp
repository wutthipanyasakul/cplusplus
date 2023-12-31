#include <iostream>
//Project 2: Dog Years:
//Write a C++ program called dog_years.cpp to calculate the age, in human years, of any dog older than 2

int main() {

	//my dog's age is 3 years old now.
	int dog_age = 3;

	int early_years;
	int later_years; // the following years are 4
	int human_years;

	// first two years of dog are 21 human years
	early_years = 21;

	//each following year counts as 4 human years

	later_years = (dog_age - 2) * 4;

	//total age of dog in human years

	human_years = early_years + later_years;

	std::cout << "My name is Candy! Ruff ruff, I am " << human_years << " years old in human years.\n";



	return 0;

}
