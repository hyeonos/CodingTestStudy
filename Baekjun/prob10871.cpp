#include <string>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main(void) {
	string N;
	getline(cin, N);
    
	string list;
	getline(cin, list);

	istringstream ss1(N);
	string asplit;

	int x = 0;

	while (getline(ss1, asplit, ' ')) {
		x = stoi(asplit);
	}

	istringstream ss2(list);
	string asplit2;

	while (getline(ss2, asplit2, ' ')) {
		if (stoi(asplit2) < x) {
			cout << asplit2 << ' ';
		}
	}

	return 0;
}
