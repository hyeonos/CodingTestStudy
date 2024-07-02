#include <iostream>

using namespace std;

int main(void) {
	/*
	* 약수가 1인 것의 개수 N/1
	* + 약수가 2인 것의 개수 N/2
	* + 약수가 3인 것의 개수 N/3
	* ...
	* + 약수가 N인 것의 개수 N/N
	*/

	int n;
	cin >> n;

	long long int sum = 0;

	for (int i = 1; i <= n; i++) {
		//cout << "n: " << n << "    i: " << i << "     n / i = " << n / i << endl;
		sum += i * (n / i);
	}

	cout << sum;

	// return 0;
}
