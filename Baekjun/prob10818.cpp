#include <string>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main(void) {
	int N;
	cin >> N;
	cin.ignore();

	string input;
	getline(cin, input);

	int max = 0;
	int min = 0;

	istringstream ss1(input);
	string asplit;

	bool start = true;

	while (getline(ss1, asplit, ' ')) {
		if (start) {
			min = stoi(asplit);
			max = stoi(asplit);
			start = false;
			continue;
		}
		if (stoi(asplit) > max) {
			max = stoi(asplit);
		}
		if (stoi(asplit) < min) {
			min = stoi(asplit);
		}
	}

	cout << min << " " << max;

	return 0;
}
