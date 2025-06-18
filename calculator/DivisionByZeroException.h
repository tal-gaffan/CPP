#include <iostream>

using std::string;

class DivisionByZeroException {
public:
	DivisionByZeroException();

	string errorMessage();

private:
	const string m_errorMsg;
};
