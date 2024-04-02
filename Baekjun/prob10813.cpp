#include <iostream>
#include <vector>

using namespace std;

int* ChangeBall(int* baguni, int i, int j);


int main(void) {
	int n, m;

	cin >> n >> m;

	int* baguni = new int[n]();

	for (int i = 0; i < n; i++) {
		baguni[i] = i + 1;
	}

	int x, y;
	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		ChangeBall(baguni, x, y);
	}

	for (int i = 0; i < n-1; i++) {
		cout << baguni[i] << " ";
	}
	cout << baguni[n - 1];

	return 0;
}

int* ChangeBall(int* baguni, int i, int j) {
	int temp = baguni[i-1];
	baguni[i-1] = baguni[j-1];
	baguni[j-1] = temp;

	return baguni;
}
