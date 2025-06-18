#include <iostream>
#include <iomanip>

#define VERTICAL_BARRIER '|'
#define HORIZONTAL_BARRIER '_'

using std::string;
using std::cout;
using std::endl;
using std::setw;

constexpr int FIRST_MULTIPLE = 1;
constexpr int LAST_MULTIPLE = 11;
constexpr int SUCCESS_CODE = 0;
constexpr int SPACES_PER_PROD = 3;
constexpr int BARRIER_THICKNESS = 1;

int main() {
	int line_length = ((LAST_MULTIPLE - FIRST_MULTIPLE + 1) * (SPACES_PER_PROD + BARRIER_THICKNESS)) + 1;
	string line_barrier = string(line_length, HORIZONTAL_BARRIER);

	cout << line_barrier << endl;
	for (int i = FIRST_MULTIPLE; i <= LAST_MULTIPLE; i++) {
		cout << VERTICAL_BARRIER;

		for (int j = FIRST_MULTIPLE; j <= LAST_MULTIPLE; j++) {
			cout << setw(SPACES_PER_PROD) << i * j << VERTICAL_BARRIER;
		}

		cout << endl;
		cout << line_barrier << endl;
	}
	return SUCCESS_CODE;
}