#include <iostream>

using std::string;

class InvalidOperatorException {
public:
	InvalidOperatorException();

	string errorMessage();

private:
	const string m_errorMsg;
};
