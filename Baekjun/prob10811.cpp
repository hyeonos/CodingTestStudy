#include <iostream>
#include <string>

using namespace std;

void PrintArray(int* arr, int n);

int main() {
	int n, m;

	cin >> n >> m;

	int* baguni = new int[n]();

	for (int i = 0; i < n; i++) {
		baguni[i] = i+1;
	}

	int start, end;
	int temp;
	for (int i = 0; i < m; i++) {
		cin >> start >> end;
		start -= 1;
		end -= 1;
		for (int j = 0; j <= int((end - start) / 2); j++)  {
			temp = baguni[start+ j];
			baguni[start + j] = baguni[end - j];
			baguni[end - j] = temp;
		}
	}

	PrintArray(baguni, n);

	return 0;
}

void PrintArray(int* arr, int n) {
	for (int i = 0; i < n - 1; i++) {
		cout << arr[i] << " ";
	}
	cout << arr[n - 1];
}
