#include "InvaildOperatorException.h"

#include <iostream>

#define ERROR_MSG "Invalid operator!"

using std::string;

// Constructor implementation
InvalidOperatorException::InvalidOperatorException() : m_errorMsg(ERROR_MSG) {}

// errorMessage implementation
string InvalidOperatorException::errorMessage() {
	return this->m_errorMsg;
}

