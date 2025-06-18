#include "optimusPrime.h"

#include <iostream>

bool isPrime(int n) {
	for (int i = 2; i <= floor(sqrt(n)); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}