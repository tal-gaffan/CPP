#include <iostream>

#define INVALID_OPERATOR "Invalid Operator!"
#define DIVISION_BY_ZERO "Divison by Zero!"

using std::string;
using std::runtime_error;

constexpr char ADD = '+';
constexpr char SUBTRACT = '-';
constexpr char MULTIPLY = '*';
constexpr char DIVIDE = '/';

class Calculator {
public:
	double add(double x, double y);
	double subtract(double x, double y);
	double multiply(double x, double y);
	double divide(double x, double y);

	double calculate(double x, char op, double y);
};

// Invalid Operation Exception class
class InvalidOperatorException : public runtime_error{
public:
	explicit InvalidOperatorException(const string& message) : runtime_error(message) {}
};

// Division By Zero Exception Class
class DivisionByZeroException : public runtime_error {
public:
	explicit DivisionByZeroException(const string& message) : runtime_error(message) {}
};