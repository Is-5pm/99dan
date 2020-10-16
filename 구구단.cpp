#include <iostream>
using namespace std;

int main() {
	int n = 1;
	for (int n = 1; n <= 9; n++) { //9로 수정
		for (int i = 1; i <= 9; i++) {
			cout << n << "*" << i << "=" << n * i << endl;
		}
	}

	return 0;
}
