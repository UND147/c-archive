//1개 정수 입력 받는 함수
//소수인지 판별하는 함수
//main에서 0이 입력될때까지 반복
// 함수는 헤더파일로 뺀다
#define _CRT_SECURE_NO_WARNINGS
#define TRUE 1
#define FALSE 0
#include <stdio.h>
#include "prime_lib.h"

int main() { //소수 판별
	int iNo;

	while (TRUE) {
		iNo = getIntNo();
		isPrimeNo(iNo);
		if (iNo == 0) {
			printf("[EXIT]\n");
			break;
		}
	}
	return 0;
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