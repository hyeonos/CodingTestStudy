#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	int count;
	vector<int> yakss;

	cin >> count;

	for (int i = 0; i < count; i++) {
		cin.ignore();
		int yak;
		cin >> yak;
		yakss.push_back(yak);
	}

	sort(yakss.begin(), yakss.end());		// 오름차순 정렬

	cout << yakss.front() * yakss.back();

	return 0;
}
