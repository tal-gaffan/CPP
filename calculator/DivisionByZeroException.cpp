#include "DivisionByZeroException.h"

#include <iostream>

#define ERROR_MSG "Division by zero!"

using std::string;

// Constructor implementation
DivisionByZeroException::DivisionByZeroException() : m_errorMsg(ERROR_MSG){}

// errorMessage implementation
string DivisionByZeroException::errorMessage() {
	return this->m_errorMsg;
}

