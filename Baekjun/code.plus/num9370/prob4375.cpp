#include <iostream>
#include <cmath>

using namespace std;

long long GetRest(long a, long b, int c);

int main(void) {

	while (true) {
		int input = 0;
		cin >> input;
		cin.ignore();

		int digit = int(log10(input)) + 1;		// 입력된 숫자의 자릿수

		cout << "입력된 숫자의 자릿수 : " << digit << endl;

		int num = 1;			// 나머지가 구해질 숫자
		long long totalnum = 0;
		long long waste = 0;
		int i = digit;			// 자릿수 : 10을 제곱할 것임

		int startnum = 1;

		for (int k = 0; k < digit - 1; k++) {
			startnum = startnum * 10 + 1;
		}
		cout << "startnum : " << startnum << endl;

		waste += startnum;

		totalnum += startnum;
		int standard = digit * 10 % input;		// A

		while (true) {
			// i는 한 바퀴 돌면 추가. i는 바퀴 수
			for (int j = 1; j <= digit; j++) {
				//totalnum += (standard * i % input) + standard;
				// (standard * i) i바퀴 째 + (standard와 j)를 곱하기
				totalnum += (long(pow(standard, i)) * j % input) % input;
			}

			cout << "totalnum : " << totalnum << endl;

			if (totalnum % input == 0) {
				cout << "나머지가 0임" << endl;
				break;
			}

			if (i >= 20) {
				break;
			}

			i += 1;
		}


		cout << i + 1 << endl;
	}
	

	return 0;
}


// a에 standard, b에 자릿수(0, 10, 100...), c에 input
long long GetRest(long a, long b, int c) {
	// 나머지 연산 분배법칙
	// (A*B)%C == ((A%C)*(B%C))%C
	long rest = 0;
	
	rest = ((a % c) * (b % c)) % c;

	return rest;
}
