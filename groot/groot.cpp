#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#define SUCCESS_CODE 0;
#define FAIL_CODE 1;


int main() {
	cout << "Please enter number: " << endl;
	int num = 0;
	cin >> num;

	if (cin.fail()) {
		cout << "Make sure to enter an integer!" << endl;
		return FAIL_CODE;
	} else if (num < 0) {
		cout << "Make sure to enter a non-negative integer!" << endl;
		return FAIL_CODE;
	}
	
	cout << "The square root is: " << sqrt(num) << endl;
	return SUCCESS_CODE;
}