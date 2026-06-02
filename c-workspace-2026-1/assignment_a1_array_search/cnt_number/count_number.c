#define _CRT_SECURE_NO_WARNINGS
#define ARRSIZE 10000
#include <stdio.h>

void main()
{
	int iArr[ARRSIZE];
	int iCnt[ARRSIZE] = { 0 };


	
	for (int i = 0; i < ARRSIZE; ++i) {
		printf("%d : 정수 입력 : ", i);
		scanf("%d", &iArr[i]);
	}
	
	int iNo;
	
	for (int i = 0; i < ARRSIZE; ++i) {
		iNo = iArr[i]; 
		iCnt[iNo] = iCnt[iNo] + 1;
	}

	printf("중복된 수는 "); // 1 1 2 2 2 3 4 5 6 7
	for (int i = 0; i < ARRSIZE; ++i) {
		if (iCnt[i] > 1) {
			printf("%d ", i  );
		}
	}
	printf("\n");

	printf("중복된 수는 "); // 1 1 2 2 2 3 4 5 6 7
	for (int i = 0; i < ARRSIZE; ++i) {
		if (iCnt[i] == 0) {
			printf("%d ", i);
		}
	}
	printf("\n");

}