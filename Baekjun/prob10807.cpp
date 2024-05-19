#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {

	int n = 0;
	cin >> n;
	
	cin.ignore();
	string vect;
	getline(cin, vect);

	int findnum = 0;
	cin >> findnum;

	istringstream ss1(vect);
	string asplit;
	vector<string> result;
	result.clear();

	int count = 0;
	
	while (getline(ss1, asplit, ' ')) {
		if (stoi(asplit) == findnum) {
			count += 1;
		}
	}
	cout << count << endl;
}
