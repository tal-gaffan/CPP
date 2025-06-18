#include "calculator.h"

using std::runtime_error;
using std::string;

// Implementation of Invalid Operator Exception
// Constructor
InvalidOperatorException::InvalidOperatorException(const string& message) : runtime_error(message) {}

// Implementation of Division by Zero Exception
// Constructor
DivisionByZeroException::DivisionByZeroException(const string& message) : runtime_error(message) {}

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
		throw DivisionByZeroException(DIVISION_BY_ZERO);
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
		throw InvalidOperatorException(INVALID_OPERATOR);
	}
}