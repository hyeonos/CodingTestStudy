#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string alphs;
	cin >> alphs;
  
	short time = 0;
  
	for (int i = 0; i < alphs.length(); i++) {
		short ascii = alphs[i] - 65;

		if (0 <= ascii && ascii < 3) {
			time += 3;
		}
		else if (3 <= ascii && ascii < 6) {
			time += 4;
		}
		else if (6 <= ascii && ascii < 9) {
			time += 5;
		}
		else if (9 <= ascii && ascii < 12) {
			time += 6;
		}
		else if (12 <= ascii && ascii < 15) {
			time += 7;
		}
		else if (15 <= ascii && ascii < 19) {
			time += 8;		// 여긴 4개
		}
		else if (19 <= ascii && ascii < 22) {
			time += 9;
		}
		else if (22 <= ascii && ascii < 26) {
			time += 10;
		}		// 입력은 알파벳 대문자만 있음
	}

	cout << time;

	return 0;
}
