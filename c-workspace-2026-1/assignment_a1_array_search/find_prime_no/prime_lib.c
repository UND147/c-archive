#define _CRT_SECURE_NO_WARNINGS
#define TRUE 1
#define FALSE 0

#include <stdio.h>
#include "prime_lib.h"

int getIntNo()
{
	int iRes;

	while (TRUE) {
		printf("0보다 크거나 같은 정수 입력 :  ");
		scanf("%d", &iRes);
		if (iRes >= 0) {
			break;
		}
	}

	return iRes;
}

int isPrime(int iNum)
{
	int bRes, iMod;

	bRes = TRUE;
	// 0과 1은 사용 안함
	for (int iDiv = 2; iDiv < iNum; ++iDiv) {
		iMod = iNum % iDiv;
		if (iMod == 0) {
			bRes = FALSE;
			break;
		}
	}

	return bRes;
}