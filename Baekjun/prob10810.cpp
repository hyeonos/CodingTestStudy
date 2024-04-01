#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int n, m;

	cin >> n >> m;

	int* baguni = new int[n]();

	int a, b, c;

	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		for (int j = a-1; j <= b-1; j++) {
			baguni[j] = c;
		}
	}

	for (int i = 0; i < n-1; i++) {
		cout << baguni[i] << " ";
	}
	cout << baguni[n-1];

	delete[] baguni;

	return 0;
}
