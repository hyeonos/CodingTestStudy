#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
	string s;
	cin >> s;
	cin.ignore();

	int times[26] = { 0 };		// 알파벳 수만큼

	for (int i = 0; i < s.length(); i++) {
		times[int(toupper(s[i])) - 65] += 1;
	}

	int max_nums = 0;			// 횟수
	int max_inds = 0;

	for (int i = 0; i < sizeof(times) / sizeof(times[0]); i++) {
		if (times[i] > 0 && max_nums <= times[i]) {
			max_nums = times[i];
			max_inds = i;
		}
	}

	int max_count = 0;
	for (int i = 0; i < sizeof(times) / sizeof(times[0]); i++) {
		if (times[i] == max_nums) {
			max_count += 1;
		}
	}


	if (max_count > 1) {
		cout << "?";
		return 0;
	}
	cout << char(max_inds + 65);

	return 0;
}
