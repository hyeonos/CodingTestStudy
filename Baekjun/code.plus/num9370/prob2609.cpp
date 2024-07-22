#include <iostream>

using namespace std;

int GCD(int big, int small);
int LCM(int big, int small);


int main() {
	int n1, n2;
	int small, big;

	cin >> n1 >> n2;

	if (n1 > n2) {
		big = n1,		small = n2;
	}
	else {
		big = n2,		small = n1;
	}

	cout << GCD(big, small) << endl;
	cout << LCM(big, small) << endl;

	return 0;
}


// 유클리드 호제법
int GCD(int big, int small) {
	int a = big, b = small, tmp;

	while (b > 0) {
		tmp = a;
		a = b;
		b = tmp % b;
	}

	return a;
}


int LCM(int big, int small) {
	return (big * small) / GCD(big, small);
}
