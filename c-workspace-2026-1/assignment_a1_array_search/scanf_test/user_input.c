#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main00()
{
	int iNo1, iNo2;
	int iSum;

	printf("첫번째 숫자를 입력하시오 : ");
	scanf("%d", &iNo1);
	printf("두번째 숫자를 입력하시오 : ");
	scanf("%d", &iNo2);

	iSum = iNo1 + iNo2;
	printf("두 숫자의 합 : %d\n", iSum);
	return 0;
}
