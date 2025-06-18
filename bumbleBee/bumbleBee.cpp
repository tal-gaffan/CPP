#include <iostream>

#include "optimusPrime.h"

#define BARRIER ','

using std::cout;
using std::cin;
using std::endl;

constexpr int SUCCESS_CODE = 0;
constexpr int INIT_VALUE = 0;
constexpr int FIRST_PRIME = 2;

void firstNPrimes(int primes[], int n) {
	int count = 0;
	int numToCheck = FIRST_PRIME;

	while (count < n) {
		if (isPrime(numToCheck)) {
			primes[count] = numToCheck;
			count++;
		}

		numToCheck++;
	}
}

void printArray(int arr[], int length) {
	for (int i = 0; i < length; i++) {
		cout << arr[i];

		if (i != length - 1) {
			cout << BARRIER;
		}
	}
	cout << endl;
}

int main() {
	cout << "Please enter the number of primes wanted: ";
	int numOfPrimes = 0;
	cin >> numOfPrimes;

	int* primes = new int[numOfPrimes];

	firstNPrimes(primes, numOfPrimes);
	printArray(primes, numOfPrimes);

	delete[] primes;
	return SUCCESS_CODE;
}