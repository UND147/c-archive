//0~9 사이의 정수 10개를 입력받아 배열에 저장한다.
// 0~9 사이의 수가 아니면 오류 출력 후 재입력
// 중복 입력된 수(들) 출력
// 미입력된 수(들) 출력
// 6 1 2 3 4 2 5 7 8 3
#define _CRT_SECURE_NO_WARNINGS
#define ARRSIZE 5
#define CHECK 10
#define TRUE 1
#include <stdio.h>

int main() 
{
	int iArrays[ARRSIZE];
	int iCount[CHECK] = { 0 };
	int iIndex, iDuplicate, iMiss;
	printf("정수 10개를 입력: ");
	for (int i = 0; i < ARRSIZE; ++i) {
		scanf("%d", &iArrays[i]);
		//중복 입력된 수 체크
		iIndex = iArrays[i];
		iCount[iIndex]++;
		if (iArrays[i] < 0 || iArrays[i] > 9) { // 0~9 사이의 수가 아니면 오류 출력 후 재입력
			printf("[ERROR] 0~9사이 정수아님. 다시 입력\n");
			--i;
		}
	}
	printf("입력된 수:");
	for(int t = 0; t < ARRSIZE; ++t) {
		printf("%d ", iArrays[t]);
	}
	
	printf("\n중복입력된 수: ");
	for (int j = 0; j < CHECK; ++j) {
		if (iCount[j] >= 2) { // 중복 입력된 수 출력
			iDuplicate = j;
			printf("%d ", iDuplicate);
		}
	}
	printf("\n카운트 배열 확인 : ");
	for (int f = 0; f < CHECK; ++f) {
		printf("%d ", iCount[f]);
	}
	printf("\n미입력된 수: ");
	for (int k = 0; k < CHECK; ++k) {
		if (iCount[k] == 0) { // 미입력된 수(들) 출력
			iMiss = k;
			printf("%d ", iMiss);
		}
	}

	return 0;
}