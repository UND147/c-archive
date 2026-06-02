#define _CRT_SECURE_NO_WARNINGS
#define ARRSIZE 10
#include <stdio.h>

void main()
{
	int iArr[ARRSIZE]; // 배열 선언
	int iCnt, iSum;
	double dAvg;

	for (int iIndex = 0; iIndex < ARRSIZE; ++iIndex) {
		iCnt = i + 1;
		printf("[%d]번째 정수 입력 : ", iCnt);
		scanf("%d", &iArr[iIndex]);
	}
	printf("입력된 수들은 다음과 같다\n");
	for (int i = 0; i < ARRSIZE; ++i) {
		printf("%d ", iArr[i]);
	}
	printf("\n==================\n");

	iSum = 0;
	for (int i = 0; i < ARRSIZE; ++i) {
		iSum = iSum + iArr[i];
	}
	printf("합계 : %d\n", iSum);

	dAvg = (double)iSum / ARRSIZE;
	printf("평균 : %f\n", dAvg);

}