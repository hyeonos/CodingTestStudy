#include <iostream>

using namespace std;

int main(void) {
	short n = 0;
	int x, s;		// x: 산지니 4인조가 가진 돈, s: 후안의 공격력

	cin >> n;
	cin.ignore();
	cin >> x >> s;

	int fee, atk;
	string result = "NO";
	for (int i = 0; i < n; i++) {
		cin >> fee >> atk;		// fee: 무기 가격, atk: 각 무기의 공격력
		cin.ignore();

		if (x >= fee && atk > s) {
			result = "YES";
		}
	}

	cout << result;

	return 0;
}
