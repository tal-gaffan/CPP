#include "calculator.h"

// Invalid Operation Exception class and implementation
class InvalidOperatorException {
public:
	InvalidOperatorException();

	string errorMessage();

private:
	const string m_errorMsg;
};

// Constructor implementation
InvalidOperatorException::InvalidOperatorException() : m_errorMsg(INVALID_OPERATOR) {}

// errorMessage implementation
string InvalidOperatorException::errorMessage() {
	return this->m_errorMsg;
}

// Division By Zero Exception Class and Implementation
class DivisionByZeroException {
public:
	DivisionByZeroException();

	string errorMessage();

private:
	const string m_errorMsg;
};

// Constructor implementation
DivisionByZeroException::DivisionByZeroException() : m_errorMsg(DIVISION_BY_ZERO) {}

// errorMessage implementation
string DivisionByZeroException::errorMessage() {
	return this->m_errorMsg;
}

// Implementation of Calculator class
// returns x + y
double Calculator::add(double x, double y) {
	return x + y;
}

// returns x - y
double Calculator::subtract(double x, double y) {
	return x - y;
}

// returns x * y
double Calculator::multiply(double x, double y) {
	return x * y;
}

// returns x / y
double Calculator::divide(double x, double y) {
	if (y == 0) {
		throw DivisionByZeroException();
	}
	return x / y;
}

// returns x op y where op is one of +, -, *, /
double Calculator::calculate(double x, char op, double y) {
	switch (op) {
	case ADD:
		return add(x, y);
	case SUBTRACT:
		return subtract(x, y);
	case MULTIPLY:
		return multiply(x, y);
	case DIVIDE:
		return divide(x, y);
	default:
		throw InvalidOperatorException();
	}
}

int main() {
	Calculator calc;
	try {
		std::cout << calc.calculate(21, '%', 0);
	}
	catch (DivisionByZeroException err) {
		std::cout << err.errorMessage() << std::endl;
	}
	catch (InvalidOperatorException err) {
		std::cout << err.errorMessage() << std::endl;
	}
}