#include <iostream>

bool isPrime(int n) {
	for (int i = 2; i <= floor(sqrt(n)); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	std::cout << isPrime(31) << std::endl;
	std::cout << isPrime(27) << std::endl;
	std::cout << isPrime(49) << std::endl;
}
