#include <iostream>
#include <string>


using namespace std;

int main(void) {
	short t;
	cin >> t;
	cin.ignore();

	for (int i = 0; i < t; i++) {
		string s;
		cin >> s;
		
		cout << s[0] << s[s.length() - 1] << endl;

		cin.ignore();
	}
}
