#include "Doener.h"
#include <iostream>
int main() {
	setlocale(LC_ALL, "");
	std::string input;
	std::cout << "senf?" << std::endl;
	std::getline(std::cin, input);
	std::transform(input.begin(), input.end(), input.begin(), ::tolower);
	std::cout << Doener::mit(input);
	std::cin.ignore();
}