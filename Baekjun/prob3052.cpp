#include <iostream>

using namespace std;

int main(void) {
	bool namuji[42] = { false };

	int n;
	int count = 0;

	for (int i = 0; i < 10; i++) {
		cin >> n;
		if (namuji[n % 42] == false) {
			count += 1;
		}
		namuji[n%42] = true;
	}

	cout << count;

	return 0;
}
