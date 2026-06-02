// 한인
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int iTime;
	int iDay, iHour, iMin, iSec;

	printf("정수 입력 : ");
	scanf("%d", &iTime);

	iMin = iTime / 60;
	iSec = iTime % 60;

	// i = i + 1
	iHour = iMin / 60;
	iMin = iMin % 60;

	iDay = iHour / 24;
	iHour = iHour % 24;
	printf("[%d]초는 [%d]일 [%d]시간 [%d]분 [%d]초 입니다.",
		iTime, iDay, iHour, iMin, iSec);
	return 0;
}