// 2개의 정수를 입력 받아 함수(나눗셈하는 함수)를 호출하여 결과값과 오류코드를 반환하여 출력한다
// 오류코드가 0 이면 연산 결과 값을 출력
// 오류코드가 -1이면 오류메시지 출력 // 결과 ㅁ/ㅁ 오류코드 결과 따로 // sprintf
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int checkError(int iNo2);
int calcDiv(int iNo1, int iNo2, int* iRes);
int main(void) {
	int iNo1, iNo2, iFlag, iRes;
	//iNo1 = 5, iNo2 = 0;
	printf("정수입력 : ");
	scanf("%d %d", &iNo1, &iNo2);
	iFlag = checkError(iNo2);
	if (iFlag == 0) {
		iRes = calcDiv(iNo1, iNo2, &iRes);
		printf("오류코드 : %d / 연산 결과 : %d", iFlag, iRes);
	}
	else {
		printf("오류코드 : %d / [ERROR]", iFlag);
	}


	return 0;
}
int checkError(int iNo2) {
	int iFlag;
	if (iNo2 == 0) {
		iFlag = -1;
	}
	else {
		iFlag = 0;
	}
	return iFlag;
}
int calcDiv(int iNo1, int iNo2, int* iRes) {
	iRes = iNo1 / iNo2;
	return iRes;
}