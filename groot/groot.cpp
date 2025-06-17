#include <iostream>

int main() {
	int num = 0;
	std::cout << "Please enter number: " << std::endl;
	std::cin >> num;
	if (std::cin.fail()) {
		std::cout << "Invalid input!" << std::endl;
		return 1;
	}
	std::cout << std::sqrt(num) << std::endl;
	return 0;
}