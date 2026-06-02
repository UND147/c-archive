#define _CRT_SECURE_NO_WARNINGS
#define TRUE 1
#include <stdio.h>

void main()
{
	int iNo;
	int iMod2;

	while (TRUE) {
		printf("정수 입력 : ");
		scanf("%d", &iNo);
		if (iNo == 0) {
			break;
		}
		iMod2 = iNo % 2;

		if (iMod2 == 0) {
			printf("짝수입니다.\n");
		}
		else {
			printf("홀수입니다.\n");
		}
	}
	
		

}