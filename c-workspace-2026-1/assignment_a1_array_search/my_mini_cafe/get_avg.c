#define _CRT_SECURE_NO_WARNINGS
#define TRUE 1
#include <stdio.h>

void main()
{
	int iNo;
	int iSum, iCnt;
	double dAvg;

	iSum = 0;
	iCnt = 0;
	while (TRUE) {
		printf("정수 입력 : ");
		scanf("%d", &iNo);  // iNo = 3
		if (iNo == -1) {
			break;
		}
		iSum = iSum + iNo;   // iSum = iNo = 3
		iCnt = iCnt + 1;  // ++iCnt    iCnt++
	}
	dAvg = (double)iSum / iCnt;
	printf("평균 : %lf \n", dAvg);
}