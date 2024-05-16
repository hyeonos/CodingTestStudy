#include <iostream>
#include <string>

using namespace std;

int main(void) {
	short t;
	cin >> t;
	cin.ignore();


	for (int i = 0; i < t; i++) {
		short repeat;
		string s;
		cin >> repeat;
		cin >> s;
		cin.ignore();

		for (int k = 0; k < s.length(); k++) {
			for (int j = 0; j < repeat; j++) {
				cout << s[k];
			}
		}
        
        cout << '\n';
	}
	return 0;
}
