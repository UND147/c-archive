//정수를 입력받아 2진수로 출력 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void calc2(int iNo);
int main4() {
	int iNo;
	iNo = 8;
	calc(iNo);
	return 0;
}
void calc2(int iNo) {

	if (iNo == 1) {
		printf("1");
	}
	else {
		printf("%d", iNo % 2);
		calc(iNo);// 4
		iNo = iNo / 2;
	}
}