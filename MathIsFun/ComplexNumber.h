#include <iostream>

#define PRINTER_FORMAT " + i"

using std::cout;

class ComplexNumber {
public: 
	// Contructors
	ComplexNumber(double real, double imaginary);
	ComplexNumber();

	// Getters
	double getReal() const;
	double getImaginary() const;

	// Setters
	void setReal(double real);
	void setImaginary(double imaginary);

	// Print
	void print() const;

	// Operators ovveride
	bool operator==(const ComplexNumber& other) const;
	ComplexNumber operator+(const ComplexNumber& other) const;
	ComplexNumber operator-(const ComplexNumber& other) const;
	ComplexNumber operator*(const ComplexNumber& other) const;

private:
	double m_real;
	double m_imaginary;
};