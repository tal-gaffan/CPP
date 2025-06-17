#include <iostream>
#include <iomanip>

#define VERTICAL_BARRIER '|'
#define HORIZONTAL_BARRIER '_'

using std::string;
using std::cout;
using std::endl;
using std::setw;

constexpr int START = 1;
constexpr int END = 11;
constexpr int SUCCESS_CODE = 0;
constexpr int SPACES_PER_PROD = 3;
constexpr int BARRIER_THICKNESS = 1;

int main() {
	string lineBarrier = string(HORIZONTAL_BARRIER, (END - START + 1) * (SPACES_PER_PROD + BARRIER_THICKNESS) + 1);
	cout << lineBarrier << endl;
	for (int i = START; i <= END; i++) {
		cout << VERTICAL_BARRIER;
		for (int j = START; j <= END; j++) {
			cout << setw(SPACES_PER_PROD) << i * j << VERTICAL_BARRIER;
		}
		cout << endl;
		cout << lineBarrier << endl;
	}
	return SUCCESS_CODE;
}