#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void) {
	int a, b;

	cin >> a >> b;

	string as = to_string(a);
	string bs = to_string(b);

	reverse(as.begin(), as.end());
	reverse(bs.begin(), bs.end());

	if (stoi(as) >= stoi(bs)) {
		cout << as;
	}
	else {
		cout << bs;
	}
}
