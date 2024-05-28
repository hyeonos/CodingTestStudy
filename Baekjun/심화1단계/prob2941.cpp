#include <iostream>
#include <string>

using namespace std;

int main(void) {
	/* 알고리즘 정리
	* 입력을 받는다.
	* 사용할 크로아티아 문자들 : c=, c-, dz=, d-, lj, nj, s=, z=
	* c=, dz=, s=, z=
	* c-, d-
	* lj, nj
	* =나 -, j를 입력받으면 index-1번째 문자를 검사한다.
  * dz=의 경우 3글자이므로 index-2까지 검사한다.
	*/

	string s;
	cin >> s;
	cin.ignore();

	short count = 0;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '=') {
			if (s[i - 1] == 'c' || s[i - 1] == 'z' || s[i - 1] == 's') {
				if (s[i - 1] == 'z' && i >= 2 && s[i - 2] == 'd') {
					count -= 1;
				}
				continue;
			}
		}
		else if (s[i] == 'j') {
			if (s[i - 1] == 'l' || s[i - 1] == 'n') {
				continue;
			}
		}
		else if (s[i] == '-') {
			if (s[i - 1] == 'c' || s[i - 1] == 'd') {
				continue;
			}
		}

		count += 1;
	}

	cout << count;

	return 0;
}
