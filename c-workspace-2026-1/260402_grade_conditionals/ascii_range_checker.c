#define _CRT_SECURE_NO_WARNINGS
//#define TRUE 1
#include <stdio.h>
int main() {
	char chInput = ' ';
	//int iUpperFlag, iLowerFlag, iNumberFlag;

	printf("문자를 입력 : ");
	scanf("%c", &chInput);
	// Flag 산술 <-> 조건 논리 관계
	// 관계 논리는 그냥 조건문 안에 넣어도
	//iUpperFlag = (chInput >= 'A') && (chInput <= 'Z');
	//iLowerFlag = (chInput >= 'a') && (chInput <= 'z');
	//iNumberFlag = (chInput >= '0') && (chInput <= '9'); 
	if ((chInput >= 'A') && (chInput <= 'Z')) {
		printf("대문자");
	}
	else if ((chInput >= 'a') && (chInput <= 'z')) {
		printf("소문자");
	}
	else if ((chInput >= '0') && (chInput <= '9')) {
		printf("숫자 문자");
	}
	else {
		printf("특수문자");
	}

	return 0;
}