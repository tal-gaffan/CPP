#include <iostream>
#include <iomanip>

#define VERTICAL_BARRIER '|'
#define HORIZONTAL_BARRIER '_'

using std::string;
using std::cout;
using std::endl;
using std::setw;

constexpr unsigned int FIRST_MULTIPLE = 1;
constexpr unsigned int LAST_MULTIPLE = 11;
constexpr int SUCCESS_CODE = 0;
constexpr unsigned int SPACES_PER_PROD = 3;
constexpr unsigned int BARRIER_THICKNESS = 1;
constexpr unsigned int LINE_LENGTH = (LAST_MULTIPLE - FIRST_MULTIPLE + 1) * (SPACES_PER_PROD + BARRIER_THICKNESS) + 1;

const string LINE_BARRIER = string(LINE_LENGTH, HORIZONTAL_BARRIER);

void print_line(int i) {
	cout << VERTICAL_BARRIER;

	for (int j = FIRST_MULTIPLE; j <= LAST_MULTIPLE; j++) {
		cout << setw(SPACES_PER_PROD) << i * j << VERTICAL_BARRIER;
	}

	cout << endl;
}

int main() {
	cout << LINE_BARRIER << endl;

	for (int i = FIRST_MULTIPLE; i <= LAST_MULTIPLE; i++) {
		print_line(i);
		cout << LINE_BARRIER << endl;
	}

	return SUCCESS_CODE;
}