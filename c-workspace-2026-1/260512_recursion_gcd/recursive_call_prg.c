//정수를 입력받아 2진수로 출력 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void calc(int iNo);
int main1() {
	int iNo;
	iNo = 8;
	calc(iNo);
	return 0;
}
void calc(int iNo) {
	
	int iDiv, iMod;
	
	iDiv = iNo / 2;
	
	if (iDiv == 1) {
		printf("1");
	}
	else {
		
		calc(iDiv);// 4
		iMod = iNo % 2;
		printf("%d", iMod);
		iNo = iDiv;
	}
	

}