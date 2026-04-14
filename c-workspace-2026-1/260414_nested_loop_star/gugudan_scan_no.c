//정수 1 개를 입력 받은 수의 구구단을 출력하시오
//입력된 정수가 1~9 사이이면 해당 수의 구구단을 출력한다
//0 이 입력될때까지 반복한다
//입력된 수가 0~9 사이의 수가 아니면 오류 메시지 출력 후 다시 입력 받는다
#define _CRT_SECURE_NO_WARNINGS
#define TRUE 1
#include <stdio.h>
void main4() {
	int iDan;
	int iResult;
	int iMultip;
	while (TRUE) {
		printf("** 출력할 구구단의 단 수 입력 : ");
		scanf("%d", &iDan);

		iResult = 0;
		if (iDan >= 1 && iDan <= 9) {
			for (int i = 0; i < 9; ++i) {
				iMultip = i + 1;
				iResult = iDan * iMultip;
				printf("%d  *  %d  =  %2d\n", iDan, iMultip, iResult);
			}
		}
		else if (iDan == 0) {
			break;
		}
		else {
			printf("[오류] 0~9 사이의 수가 아님 다시 입력\n");
		}
	}
}