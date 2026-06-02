#define STUDENTS 3
#define COLS 5
#include <stdio.h>
int main(void) {
	int iScoreZ[STUDENTS][COLS] = {
		{87, 98, 80, 76, 3},
		{99, 89, 90, 90, 0},
		{65, 68, 50, 49, 0}
	};
	double dWeight[COLS] = { 0.3, 0.4, 0.2, 0.1, -1.0 };

	for (int j = 0; j < STUDENTS; ++j) {
		for (int i = 0; i < COLS; ++i) {
			printf("%d ", iScoreZ[j][i]);
		}
		printf("\n");
	}

	double dFinalScore;

	for (int j = 0; j < STUDENTS; ++j) {
		dFinalScore = 0;
		for (int i = 0; i < COLS; ++i) {
			dFinalScore = dFinalScore + iScoreZ[j][i] * dWeight[i];
		}

		printf("1 ¹ø : %.2lf\n", dFinalScore);

	}
	
		       
	

	return 0;
}