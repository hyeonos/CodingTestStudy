#include <iostream>

using namespace std;

int* PushMembers(int* array, int begin, int end, int insertvalue);

int main(void) {
	int n;
	cin >> n;
	cin.ignore();
	int* resultarr = new int[n] { 0 };		// 학생 수만큼 배열 만들기.
																	// 배열 내의 숫자를 모두 0으로 초기화

	resultarr[0] = 1;

	int selectedn = 0;
	for (int i = 0; i < n; i++) {
		cin >> selectedn;
		cin.ignore();

		PushMembers(resultarr, i - selectedn, i, i + 1);
	}


	// 결과 출력
	for (int i = 0; i < n; i++) {
		cout << resultarr[i] << " ";
	}


	delete[] resultarr;

	return 0;
}



int* PushMembers(int* array, int begin, int end, int insertvalue) {
	int temp = 0;
	temp = array[end];

	for (int i = end; i > begin; i--) {
		array[i] = array[i - 1];
	}

	array[begin] = insertvalue;

	return array;
}
