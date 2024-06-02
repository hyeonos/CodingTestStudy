#include <iostream>

using namespace std;

long double ReturnFloatGrade(string grade);

int main(void) {
	long double sum = 0.0;
	long double sum_scores = 0.0;

	// P(pass)를 받은 과목은 등급에서 제외
	for (int i = 0; i < 20; i++) {
		string subject;
		long double score;
		string grade;

		cin >> subject >> score >> grade;
		// SystemProgramming 3.0 B0
    
		if (grade.compare("P") == 0) {
			continue;
		}
		else {
			sum += score * ReturnFloatGrade(grade);
			sum_scores += score;
		}
	}

	cout << sum / sum_scores;

	// printf("%.6lf", sum / sum_scores);

	return 0;
}

long double ReturnFloatGrade(string grade) {
	long double float_grade = 0.0;

	if (grade.compare("A+") == 0) {		// 0은 false 아닌가?
		float_grade = 4.5;
	}
	else if (grade.compare("A0") == 0) {
		float_grade = 4.0;
	}
	else if (grade.compare("B+") == 0) {
		float_grade = 3.5;
	}
	else if (grade.compare("B0") == 0) {
		float_grade = 3.0;
	}
	else if (grade.compare("C+") == 0) {
		float_grade = 2.5;
	}
	else if (grade.compare("C0") == 0) {
		float_grade = 2.0;
	}
	else if (grade.compare("D+") == 0) {
		float_grade = 1.5;
	}
	else if (grade.compare("D0") == 0) {
		float_grade = 1.0;
	}
	else if (grade.compare("F") == 0) {
		float_grade = 0.0;
	}

	return float_grade;
}
