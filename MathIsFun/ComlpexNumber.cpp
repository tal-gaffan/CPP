#include "ComplexNumber.h"

// Implementation of Complex Number
// Constructors 
ComplexNumber::ComplexNumber(double real, double imaginary) : m_real(real), m_imaginary(imaginary) {}

ComplexNumber::ComplexNumber() : ComplexNumber(0, 0) {}

// Getters Implementation
double ComplexNumber::getReal() const{
	return this->m_real;
}

double ComplexNumber::getImaginary() const {
	return this->m_imaginary;
}

// Setters Implementation
void ComplexNumber::setReal(double real) {
	this->m_real = real;
}

void ComplexNumber::setImaginary(double imaginary) {
	this->m_imaginary = imaginary;
}

// Print implementation
void ComplexNumber::print() const{
	cout << this->m_real << PRINTER_FORMAT << this->m_imaginary;
}

// Operator implementation
bool ComplexNumber::operator==(const ComplexNumber& other) const{
	return (this->m_real == other.m_real) && (this->m_imaginary == other.m_imaginary);
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber& other) const {
	double new_real = this->m_real + other.m_real;
	double new_imaginary = this->m_imaginary + other.m_imaginary;
	return ComplexNumber(new_real, new_imaginary);
}

ComplexNumber ComplexNumber::operator-(const ComplexNumber& other) const {
	double new_real = this->m_real - other.m_real;
	double new_imaginary = this->m_imaginary - other.m_imaginary;
	return ComplexNumber(new_real, new_imaginary);
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber& other) const {
	double new_real = (this->m_real * other.m_real) - (this->m_imaginary * other.m_imaginary);
	double new_imaginary = (this->m_real * other.m_imaginary) + (this->m_imaginary * other.m_real);
	return ComplexNumber(new_real, new_imaginary);
}