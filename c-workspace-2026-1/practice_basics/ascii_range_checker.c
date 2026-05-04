//키보드에서 문자를 입력 받아 “영문 소문자”, “영문 대문자”, “숫자 문자“, “특수문자”인자 여부를 판별하는 프로그램 작성
//‘A‘ ~‘Z’ 사이인 경우 영문 대문자
//‘a‘ ~‘z’ 사이인 경우 영문 소문자
//‘0’ ~‘9’ 사이인 경우 숫자 문자
//위 3가지 문자가 아니면 특수문자
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main2() 
{
	char chInput;
	int iUpperFlag, iLowerFlag, iNumberFlag;

	printf("판별하고 싶은 문자를 입력 : ");
	scanf("%c", &chInput);

	iUpperFlag = chInput >= 'A' && chInput <= 'Z';
	iLowerFlag = chInput >= 'a' && chInput <= 'z';
	iNumberFlag = chInput >= '0' && chInput <= '9';

	if (iUpperFlag) {
		printf("영문 대문자");
	}
	else if (iLowerFlag) {
		printf("영문 소문자");
	}
	else if (iNumberFlag) {
		printf("숫자 문자");
	}
	else {
		printf("특수문자");
	}

	return 0;
}