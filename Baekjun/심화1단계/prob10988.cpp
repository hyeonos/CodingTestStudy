#include <iostream>

using namespace std;

int main(void) {
	string s;

	cin >> s;

	short result = 1;

	for (int i = 0; i < s.length() / 2; i++) {
		if (s[i] == s[s.length() - 1 - i]) {
			continue;
		}
		else {
			result = 0;
		}
	}

	cout << result;

	return 0;
}
