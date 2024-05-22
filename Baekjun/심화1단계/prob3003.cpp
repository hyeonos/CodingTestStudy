#include <iostream>

using namespace std;

int main(void) {
	// 킹 1개, 퀸 1개, 룩 2개, 비숍 2개, 나이트 2개, 폰 8개
	short chess[6] = { 1, 1, 2, 2, 2, 8 };

	short n;
	for (int i = 0; i < 6; i++) {
		cin >> n;
		chess[i] -= n;
		cin.ignore();
	}

	for (int i = 0; i < 6; i++) {
		cout << chess[i] << " ";
	}

	return 0;
}
