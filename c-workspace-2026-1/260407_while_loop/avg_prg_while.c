#define _CRT_SECURE_NO_WARNINGS
#define TRUE 1
#include <stdio.h>
int main3() {
	int iNo, iCount, iSum;
	double dAvg;

	iCount = 0;
	iSum = 0;
	while (TRUE) {
		printf("정수 1개를 입력 : ");
		scanf("%d", &iNo);
		printf("\n");
		if (iNo == -1) {
			break;
		}
		iCount++;
		iSum = iSum + iNo;
	}
	dAvg = (double)iSum / iCount;
	printf("평균은 %.2lf", dAvg);

	return 0;
}