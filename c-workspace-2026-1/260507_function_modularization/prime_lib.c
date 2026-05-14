#define _CRT_SECURE_NO_WARNINGS
#define TRUE 1
#define FALSE 0
#include <stdio.h>
#include "prime_lib.h"

int getIntNo() {
	int iNo;
	while (TRUE) {

		printf("정수 입력: ");
		scanf("%d", &iNo);

		if (iNo >= 0) {
			break;
		}
		else {
			printf("[ERROR]0보다 큰 숫자입력\n");
		}
	}
	return iNo;
}
void isPrimeNo(int iNo) {
	//int iMod;
	int iDiv;
	//int iCount;
	int bFlag;

	bFlag = TRUE;
	if (iNo > 0) {
		for (int i = 2; i < iNo; ++i) {
			iDiv = iNo % i;
			if (iDiv == 0) {
				bFlag = FALSE;
				break;
			}
		}
		if (bFlag == TRUE) {
			printf("소수\n");
		}
		else {
			printf("소수가아님\n");
		}
	}
}


// 
//0과1로나누는것은 의미없음 2로 시작 > 연산논리 iDiv = iNo % i > if iDiv == 0 이면 break 
//if 조건식에서 bool flag활용 > for문을 다 돌았는지 판별 
/*
for (int i = 2; i <= iNo; ++i){
	iDiv = iNo % i
	if(iDiv == 0){
		iFlag = 0;
		break;
	}
}
	if(iFlag == 1){
		printf("소수\n");
	} else {
		printf("소수가아님\n");
	}
*/

/*
iCount = 0;

	if (iNo > 0) {
		for (int i = 0; i < iNo; ++i) {
			iDiv = i + 1;
			iMod = iNo % iDiv; // 2 1 0 2 2 0 3 1
			if (iMod == 0) {
				iCount++;
			}
			if (iCount > 2) {
				break;
			}
		}
		if (iCount == 2) {
			printf("소수\n");
		}
		else {
			printf("소수가아님\n");
		}
	}
*/