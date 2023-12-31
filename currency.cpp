//Project 4: Piggy Bank
//Write a C++ program called currency.cpp that prompts the user for the amount of each foreign currency.

#include <iostream>

int main() {
	//Creating variables:

	double peso, reais, soles, peso_to_dollars, reais_to_dollars, soles_to_dollars, dollars;

	//Asking the questions and taking inputs:

	std::cout << "Enter number of Colombian Pesos: ";
	std::cin >> peso;

	std::cout << "Enter number of Brazilian Reais: ";
	std::cin >> reais;

	std::cout << "Enter number of Peruvian Soles: ";
	std::cin >> soles;

	//Coverting to USD:

	peso_to_dollars = peso * 0.26996; // 1 peso equals 0.26996 us dollars

	reais_to_dollars = reais * 0.20603543; // 1 reais equals 0.20603543 us dollars

	soles_to_dollars = soles * 0.2692916;// 1 soles equals to 0.2692916 us dollars

	dollars = peso_to_dollars + reais_to_dollars + soles_to_dollars;

	std::cout << "US Dollars = $" << dollars << "\n";

	return 0;


}
