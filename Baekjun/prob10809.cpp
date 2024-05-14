#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string str;
	cin >> str;
	cin.ignore();

	for (int i = 0; i < 26; i++) {
		if (str.find(97 + i) == string::npos) {
			cout << -1 << ' ';
		}
		else {
			cout << str.find(97 + i) << ' ';
		}
	}

	return 0;
}
