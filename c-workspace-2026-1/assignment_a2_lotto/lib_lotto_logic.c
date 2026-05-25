#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lib_lotto_logic.h"

#define ARR_SIZE 6
#define MAX_LOTTO_NO 45
#define TRUE 1
#define FALSE 0
#define LOTTO_REPEAT_COUNT 5

// 1~45 사이의 임의의 정수를 중복없이 6개 추출
void getLottoNo(int iLottoArr[]) {
	int iRandNo;

	for (int iIndex = 0; iIndex < ARR_SIZE; ++iIndex)
	{
		while (TRUE)
		{
			//난수 생성
			iRandNo = (rand() % MAX_LOTTO_NO) + 1;

			//중복이면 다시
			if (isDuplicateNo(iLottoArr, iIndex, iRandNo) == TRUE)
			{
				continue;
			}

			iLottoArr[iIndex] = iRandNo;
			break;
		}
	}
}

// 중복 검사, 생성된 난수가 배열 안에 존재하는지 확인
int isDuplicateNo(const int iLottoArr[], int iIndex, int iRandNo) {
	int bIsDuplicate = FALSE;
	for (int iCheckIndex = 0; iCheckIndex < iIndex; ++iCheckIndex)
	{
		if (iRandNo == iLottoArr[iCheckIndex])
		{
			bIsDuplicate = TRUE;
			break;
		}
	}
	return bIsDuplicate;

}

// 선택정렬 오름차순
void sortArrAsc(int iLottoArr[]) {
	int iMin, iMinIndex;
	int iTemp, iSearchIndex;
	int iCnt;
	for (int iLoop = 0; iLoop < ARR_SIZE - 1; ++iLoop) {
		iMin = iLottoArr[iLoop];
		iMinIndex = iLoop;
		iCnt = ARR_SIZE - iLoop - 1;
		for (int iCompare = 0; iCompare < iCnt; ++iCompare) {
			iSearchIndex = iLoop + iCompare + 1;
			if (iLottoArr[iSearchIndex] < iMin) {
				iMin = iLottoArr[iSearchIndex];
				iMinIndex = iSearchIndex;
			}
		}
		if (iMinIndex != iLoop) {
			iTemp = iLottoArr[iMinIndex];
			iLottoArr[iMinIndex] = iLottoArr[iLoop];
			iLottoArr[iLoop] = iTemp;
		}
	}
}
// 로또 배열 출력
void prnArr(const int iLottoArr[], int iLoop) {
	int iCaseNo = iLoop + 1;
	printf("====== %d번째 로또 번호 ======\n", iCaseNo);
	printf("{ ");
	for (int iPrnIndex = 0; iPrnIndex < ARR_SIZE; ++iPrnIndex) {
		printf("%d ", iLottoArr[iPrnIndex]);
		
		if (iPrnIndex == ARR_SIZE - 1) {
			break;
		}
		printf("/ ");
	}
	printf("}\n\n");
}