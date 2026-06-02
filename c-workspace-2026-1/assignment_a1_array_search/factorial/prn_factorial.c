#define _CRT_SECURE_NO_WARNINGS
#define TRUE 1

#include <stdio.h>

long getIntNo(); // 함수 선언 -> 함수 원형(프로토타입)
long getFactorial(long iNo);
void main() {
	long iN, iR;
	long iRes;

	
	iN = getIntNo();  // 함수 호출
	iR = getIntNo();  // 함수 호출

	iRes = getFactorial(iN);

	printf("C(n,r) = %d\n", iRes);
	
}

long getIntNo()
{
	long iRes;

	printf("정수 입력 : ");
	scanf("%ld", &iRes);

	return iRes;
}

long getFactorial(long iNo)
{
	long iRes, iCnt;

	iRes = 1;
	for (long i = 0; i < iNo; ++i) {
		iCnt = i + 1;
		iRes = iRes * iCnt;
	}

	return iRes;
}