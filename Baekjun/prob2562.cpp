#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(void) {
	int n;
	vector<int> v;

	for (int i = 0; i < 9; i++) {
		cin >> n;
		v.push_back(n);
	}

	int max = *max_element(v.begin(), v.end());
	int max_index = max_element(v.begin(), v.end()) - v.begin();
	cout << max << endl;
	cout << max_index+1;

	return 0;
}
