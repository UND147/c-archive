#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int iNo;
	int iMod2;

	printf("정수 입력 : ");
	scanf("%d", &iNo);

	iMod2 = iNo % 2;
	if (iMod2 == 0) {
		printf("[%d]는 짝수입니다.\n", iNo);
	}
	else {
		printf("[%d]는 홀수입니다.\n", iNo);
	}
}