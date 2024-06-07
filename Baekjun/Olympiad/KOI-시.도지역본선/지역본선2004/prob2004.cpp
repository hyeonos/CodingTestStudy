#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int SumHeights(int heights[], int except1, int except2);

int main(void) {
	int truedwarfs[7];			// 진짜 일곱난쟁이인 드워프들 (index값)
	int heights[9];

	for (int i = 0; i < 9; i++) {
		int height;
		cin >> height;
		cin.ignore();

		heights[i] = height;
	}

	sort(heights, heights + 9, less<>());		//	 오름차순정렬


	int exceptInd1, exceptInd2;
	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (SumHeights(heights, i, j) == 100) {
				exceptInd1 = i;
				exceptInd2 = j;
				break;
			}
		}
	}


  // 정답 출력 똑같이
	for (int ind = 0; ind < 9; ind++) {
		if (ind == exceptInd1 or ind == exceptInd2) {
			continue;
		}
		cout << heights[ind] << endl;
	}

	return 0;
}



int SumHeights(int heights[], int except1, int except2) {
	int sum = 0;

	for (int i = 0; i < 9; i++) {
		if (i == except1 or i == except2) {
			continue;
		}
		sum += heights[i];
	}

	return sum;
}
