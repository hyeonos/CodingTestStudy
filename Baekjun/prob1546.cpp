#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(void) {
	int n;
	cin >> n;

	cin.ignore();
	string scores;
	getline(cin, scores);

	istringstream ss(scores);
	string asplit;
	vector<float> ascore;

	while (getline(ss, asplit, ' ')) {
		ascore.push_back(stoi(asplit));
	}

	float m = *max_element(ascore.begin(), ascore.end());
	float sum = accumulate(ascore.begin(), ascore.end(), 0);

	float result = sum / (n * m) * 100;
	cout << result;

	return 0;
}
