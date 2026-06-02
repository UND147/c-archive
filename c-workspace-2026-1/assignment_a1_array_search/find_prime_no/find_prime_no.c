#define _CRT_SECURE_NO_WARNINGS
#define TRUE 1
#define FALSE 0

#include <stdio.h>
#include "prime_lib.h"

void main()
{
	int iNo, bPrime;

	while (TRUE) {
		iNo = getIntNo(); // 호출
		if (iNo == 0) {
			break;
		}
		bPrime = isPrime(iNo);
		if (bPrime == TRUE) {
			printf("소수입니다.\n");
		}
		else {
			printf("소수아닙니다.\n");
		}
	}
}

