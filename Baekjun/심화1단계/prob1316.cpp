#include <iostream>
#include <string>

using namespace std;

bool CountGroupWord(string s);

int main(void) {
	int n;
	cin >> n;
	cin.ignore();

	int count = 0;
	for (int i = 0; i < n; i++) {
		string word;
		cin >> word;
		cin.ignore();

		if (CountGroupWord(word)) {
			count += 1;
		}
	}

	cout << count;

	return 0;
}

bool CountGroupWord(string s) {
	bool is_group = true;
	int asciis[26] = { 0 };

	asciis[s[0] - 'a'] += 1;
	for (int i = 1; i < s.length(); i++) {
		if (s[i] == s[i - 1]) {		// 이전 글자와 같다면 건너뛰기
			continue;
		}
		else {				// 같지 않다면
			if (asciis[s[i] - 'a'] > 0) {
				is_group = false;
			}
			else {			// 처음 나온 글자라면
				asciis[s[i] - 'a'] += 1;
			}
		}
		asciis[s[i] - 'a'] += 1;
	}

	return is_group;		// 0: false, 1: true
}


// asciis[int(s[0]) - 65] 이걸 asciis[s[0] - 'a']로 바꾸니까 함수가 제대로 종료됐다.
// 아... 알고보니 65는 대문자 A라 배열 index 너머로 값이 할당되고 있었던 듯.
