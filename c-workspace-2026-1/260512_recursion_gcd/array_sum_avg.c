#define _CRT_SECURE_NO_WARNINGS
#define ARRSIZE 10
#include <stdio.h>
int main() {
	int iArrays[ARRSIZE];
	int iSum;
	double dAvg;

	iSum = 0;
	//정수 10개를 입력받아 배열에 저장한다.
	printf("정수 10개를 입력 : ");
	for (int i = 0; i < ARRSIZE; ++i) {
		
		scanf("%d", &iArrays[i]);
		iSum = iSum + iArrays[i];
	}
	printf("배열 값 : ");
	for (int j = 0; j < ARRSIZE; ++j) {

		printf("%d ", iArrays[j]);
		
	}
	printf("\n");
	dAvg = (double)iSum / ARRSIZE;

	printf("합 : %d \n", iSum);
	printf("평균 : %.2lf", dAvg);


	return 0;
}