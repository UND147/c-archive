//정수 n을 받아서 1에서 n까지의 정수들의 곱을 계산하여 반환하는 팩토리얼 함수를 작성
//입력 - 별도의 함수, 팩토리얼 별도의 함수
#define _CRT_SECURE_NO_WARNINGS
#define TRUE 1
#include <stdio.h>
int getInteger();
int getFactorial(int iNo);
int getCombination(long long iNo1, long long iNo2);

int main() {
	int iNo, iRes;
	long long iNo1, iNo2, iComb;
	iNo = getInteger();
	iRes = getFactorial(iNo);
	printf("[ %d ]의 팩토리얼 값: %d", iNo, iRes);
	iNo1 = getInteger();
	iNo2 = getInteger();
	iComb = getCombination(iNo1, iNo2);
	printf("[ %lld와 %lld ]의 조합: %lld", iNo1, iNo2, iComb);
	return 0;
}

int getInteger() {
	int iNo = 0;
	while (TRUE) {
		printf("0이상의 정수를 입력 : ");
		scanf("%d", &iNo);
		if (iNo >= 0) {
			break;
		}
		else { // 음수일때 다시입력
			printf("[ERROR] 0이상의 정수를 입력\n");
		}
	}
	return iNo;
}

int getFactorial(int iNo) {
	int iRes = 1;
	int iCnt;
	if (iNo >= 1) { // 1부터 정수까지 곱을 계산
		for (int i = 0; i < iNo; ++i) {
			iCnt = i + 1;
			iRes = iRes * iCnt;
		}
	}
	else { // 0이상의 정수만 입력받았음, else case는 0일때
		iRes = 1;
	}
	
	return iRes;
}

int getCombination(long long iNo1, long long iNo2) {
	long long iRes;
	iRes = getFactorial(iNo1) / getFactorial(iNo1 - iNo2) * getFactorial(iNo2);
	return iRes;
}