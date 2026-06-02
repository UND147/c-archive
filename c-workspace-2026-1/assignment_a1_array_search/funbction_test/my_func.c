#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int addTwoInt(int , int );   // 함수 선언
int getIntNo();

void main()
{
	int iRes, iNo1, iNo2;

	iNo1 = getIntNo();
	iNo2 = getIntNo();
	iRes = addTwoInt(iNo1, iNo2);  // 함수 호출

	printf("결과 : %d\n", iRes);

}

int addTwoInt(int iNo1, int iNo2) // 함수 정의=구현
{
	int iRes;

	iRes = iNo1 + iNo2;
	return iRes;
}

int getIntNo()
{
	int iRes;

	printf("정수입력 : ");
	scanf("%d", &iRes);

	return iRes;
}