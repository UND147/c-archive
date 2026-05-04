#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int iNo;
	int iTemp;
	int iMod;
	int iRes;
	iNo = 123;
	iMod = iNo % 10; // 3
	iNo = iNo / 10; // 12
	iRes = iMod * 10; // 30
	iMod = iNo % 10; // 2
	iNo = iNo / 10;
	iRes = (iRes * 10) + iNo + (iMod * 10);
	printf("%d",iRes);

}