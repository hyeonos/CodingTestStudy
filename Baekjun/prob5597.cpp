#include <iostream>

using namespace std;

int main(void) {
	int n;
	bool scores[30];

	for (int i = 0; i < 30; i++) {
		scores[i] = true;
	}

	for (int i = 0; i < 28; i++) {
		cin >> n;
		scores[n-1] = false;
		cin.ignore();
	}
  
	for (int i = 0; i < 30; i++) {
		if (scores[i] == true) {
			cout << i+1 << endl;
		}
	}

	return 0;
}
