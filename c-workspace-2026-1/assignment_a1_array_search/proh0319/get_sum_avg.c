// 한인
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main00()
{
	double dNo1, dNo2, dNo3;
	double dSum, dAvg;

	printf("3개의 실수 입력 : ");
	scanf("%lf %lf %lf", &dNo1, &dNo2, &dNo3);

	dSum = dNo1 + dNo2 + dNo3;
	dAvg = dSum / 3;

	printf("합계 : [ %.2lf ]         평균 : [ %lf ]\n", dSum, dAvg );
	return 0;
}