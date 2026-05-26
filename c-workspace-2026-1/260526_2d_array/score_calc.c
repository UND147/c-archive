// 가중치 배열 & (- x) >> (+ x * -1)

#include <stdio.h>
#define ROW_SIZE 3
#define COL_SIZE 5
void prnArray(int iScore[]);
double getTotalScore(int iScore[]);

int main() {
	double dTotalScore = 0;
	
	//성적 2차원 배열에 저장
	int iScore[ROW_SIZE][COL_SIZE] = {
		{87, 98, 80, 76, 3},
		{99, 89, 90, 90, 0},
		{65, 68, 50, 49, 0}
	};

	// 성적 계산 함수
	for (int iIndex = 0; iIndex < ROW_SIZE; ++iIndex) {
		prnArray(iScore[iIndex]);
		int iStdNo = iIndex + 1;
		dTotalScore = getTotalScore(iScore[iIndex]);
		printf("학생 #%d의 최종성적= %.2lf\n", iStdNo, dTotalScore);
	}

	return 0;
}
double getTotalScore(int iScore[]) {
	double dTotalScore = 0;
	// 가중치 배열
	double dWeight[COL_SIZE] = { 0.3, 0.4, 0.2, 0.1, -1 };
	for (int i = 0; i < COL_SIZE; ++i) {
		
		
		dTotalScore += (iScore[i] * dWeight[i]);
		
	}
	//dTotalScore = dTotalScore + (double)iScore[0] * 0.3; // 중간고사
	//dTotalScore = dTotalScore + (double)iScore[1] * 0.4; // 기말고사
	//dTotalScore = dTotalScore + (double)iScore[2] * 0.2; // 기말과제
	//dTotalScore = dTotalScore + (double)iScore[3] * 0.1; // 퀴즈점수
	//dTotalScore = dTotalScore - iScore[4]; // 결석횟수(감점) 
	return dTotalScore;

}
void prnArray(int iScore[]) {
	printf("{ ");
	for (int j = 0; j < COL_SIZE; ++j) {
		printf("%d ", iScore[j]);
	}
	printf("}\n");
}
//1 0 3 4
//0 4 1 0
//2 0 4 0
//0 3 0 1