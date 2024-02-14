// 총 N개의 정수가 주어졌을 때, 정수 v가 몇 개인지 구하는 프로그램을 작성하시오.
/*
* https://www.acmicpc.net/problem/10807
첫째 줄에 정수의 개수 N(1 ≤ N ≤ 100)이 주어진다.
둘째 줄에는 정수가 공백으로 구분되어져있다.
셋째 줄에는 찾으려고 하는 정수 v가 주어진다.
입력으로 주어지는 정수와 v는 -100보다 크거나 같으며, 100보다 작거나 같다.
*/


#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

void probfilewrite();
string probfileread();


int main() {
	probfilewrite();
	string prob = probfileread();
	
	// 문자열 분리 단계
	istringstream ss1(prob);
	string stringBuffer;
	vector<string> x;
	x.clear();

	// https://chbuljumeok1997.tistory.com/42
	cout << "어케 잘리나 확인해 봐" << endl;
	while (getline(ss1, stringBuffer, '\n')) {
		x.push_back(stringBuffer);
		cout << stringBuffer << " 잘림" << endl;
	}

	cout << "=========== vector 값 출력 ===========" << endl;
	for (int i = 0; i < x.size(); i++) {
		cout << x[i] << endl;
	}

	istringstream ss2(x[1]);
	while (getline(ss2, stringBuffer, " ")) {

	}
	cout << "ㅇ르즐믇 " << x[1] << endl;
	/*
	for (int i = 0; i < stoi(x[0]); i++) {
		if (stoi(x[1][i]) == stoi(x[2]))
	}*/

	/*
	// istringstream을 사용하면 띄어쓰기에 의해 split이 된다고 함
	int num;
	string tmp;
	// 정수형 num에 띄어쓰기나 '\n'까지 인식해서 담는다
	while (ss1 >> num) cout << num << endl;
	// 문자열 tmp에 담음
	while (ss1 >> tmp) cout << tmp << endl;
	*/
}


// https://datahub.tistory.com/15
void probfilewrite() {
	// 파일 쓰기 -> problem.txt 생성
	// problem.txt 읽어들이기
	// problem 전체를 return

	// 1. 파일 쓰기
	ofstream file("problem.txt");
	if (file.is_open()) {
		file << "11" << endl;
		file << "1 4 1 2 4 2 4 2 3 4 4" << endl;
		file << "2";
		file.close();
	}
	else {
		cout << "error~~" << endl;
	}
}


string probfileread() {
	// 2. problem.txt 읽어들이기
	string line;
	string allline = "";

	ifstream file("problem.txt");		// 파일이 없으면 생성
	if (file.is_open()) {
		while (getline(file, line)) {
			// cout << line << endl;
			allline += line + "\n";
		}
		file.close();			// 열었던 파일을 닫음
	}
	else {
		cout << "Unable to open file";
		return "0";
	}
	return allline;
}
