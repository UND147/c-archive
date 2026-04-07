#define _CRT_SECURE_NO_WARNINGS
#define TRUE 1
#include <stdio.h>
void main5() {
	int iNo;
	int iMod;
	
	while (TRUE) 
	{
		printf("정수 1개를 입력 : ");
		scanf("%d", &iNo);

		if (iNo == 0) {
			break;
		}
		else {
			iMod = iNo % 2;

			if (iMod == 0) {
				printf("%d는 짝수\n", iNo);
			}
			else {
				printf("%d는 홀수\n", iNo);
			}
		}
	}
}