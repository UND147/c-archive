// 정수 10개를 입력받아 최솟값과 최댓값을 찾는 프로그램을 작성하시오
// 정수 10개를 입력하여 배열에 저장한다
// 입력된 수 중에서 최솟값과 최댓값을 출력 한다
// 두번째 작은 수 찾기
#define _CRT_SECURE_NO_WARNINGS
#define ARRSIZE 10
#include <stdio.h>
int getMinValue(int iArrays[]);
int getMaxValue(int iArrays[]);
void sortArr(int iArrays[]);
void printArr(int iArrays[]);
//4 6 3 8 2 5 3 7 9 1
int main() {
	int iArrays[ARRSIZE] = {4, 6, 3, 8, 2, 5, 3, 7, 9, 1};
	int iMin, iMax;
	/*for (int iInputIndex = 0; iInputIndex < ARRSIZE; ++iInputIndex) {
		printf("%d번째 정수 입력 : ", iInputIndex + 1);
		scanf("%d", &iArrays[iInputIndex]);
	}*/
	iMin = getMinValue(iArrays);
	iMax = getMaxValue(iArrays);
	printArr(iArrays);
	printf("최댓값은 : %d\n", iMax);
	printf("최솟값은 : %d\n", iMin);
	sortArr(iArrays);
	printArr(iArrays);
	//두번째 최솟값
	printf("두번째 최솟값 : %d", iArrays[1]);

	return 0;
}
//1부터 탐색 ,,  각 과정을 분리 >> 각자의 함수로
int getMinValue(int iArrays[]) {
	int iMin;
	iMin = iArrays[0];
	for (int iMinSearch = 1; iMinSearch < ARRSIZE; ++iMinSearch) {
		if (iArrays[iMinSearch] < iMin) {
			iMin = iArrays[iMinSearch];
		}
	}
	return iMin;
}

int getMaxValue(int iArrays[]) {
	int iMax;
	iMax = iArrays[0];
	for (int iMaxSearch = 1; iMaxSearch < ARRSIZE; ++iMaxSearch) {
		if (iArrays[iMaxSearch] > iMax) {
			iMax = iArrays[iMaxSearch];
		}
	}
	return iMax;
}

void sortArr(int iArrays[]) 
{
	int iMin, iIndex, iTemp[ARRSIZE];

	for (int iLoop = 0; iLoop < ARRSIZE; ++iLoop)
	{
		iMin = iArrays[iLoop];
		iIndex = iLoop;
		
		for (int j = iLoop; j < ARRSIZE; ++j)
		{
			if (iMin > iArrays[j])
			{
				iMin = iArrays[j];
				iIndex = j;
			}
		}
		iTemp[iLoop] = iArrays[iLoop];
		iArrays[iLoop] = iArrays[iIndex];
		iArrays[iIndex] = iTemp[iLoop];
	}
}
void printArr(int iArrays[]) {
	//배열 출력
	printf("배열 원소 : { ");
	for (int iPrintIndex = 0; iPrintIndex < ARRSIZE; ++iPrintIndex) {
		printf("%d ", iArrays[iPrintIndex]);
	}
	printf("}\n");
}