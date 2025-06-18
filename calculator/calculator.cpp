#include "calculator.h"

#include "DivisionByZeroException.h"
#include "InvaildOperatorException.h"

// Implement all calculator class functions
double Calculator::add(double x, double y) {
	return x + y;
}

double Calculator::subtract(double x, double y) {
	return x - y;
}

double Calculator::multiply(double x, double y) {
	return x * y;
}

double Calculator::divide(double x, double y) {
	if (y == 0) {
		throw DivisionByZeroException();
	}
	return x / y;
}

double Calculator::calculate(double x, char op, double y) {
	switch (op) {
	case '+':
		return add(x, y);
	case '-':
		return subtract(x, y);
	case '*':
		return multiply(x, y);
	case '/':
		return divide(x, y);
	default:
		throw InvalidOperatorException();
	}
}

int main() {
	Calculator calc;
	try {
		std::cout << calc.calculate(2, '$', 0);
	}
	catch (DivisionByZeroException err) {
		std::cout << err.errorMessage() << std::endl;
	}
	catch (InvalidOperatorException err) {
		std::cout << err.errorMessage() << std::endl;
	}
}