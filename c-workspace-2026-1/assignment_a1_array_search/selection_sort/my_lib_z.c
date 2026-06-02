#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "my_lib_z.h"

void sortSelection(int iArr[], int iSize)
{
	int iMinIdx;

	printArray(iArr, iSize);
	for (int j = 0; j < iSize; ++j) {
		iMinIdx = getMinValIdx(iArr, j, iSize);
		procSwap(iArr, j, iMinIdx);
		printArray(iArr, iSize);
	}
}
void procSwap(int iArr[], int iFrontIdx, int iRearIdx) {
	int iTmp; 

	iTmp = iArr[iFrontIdx];
	iArr[iFrontIdx] = iArr[iRearIdx];
	iArr[iRearIdx] = iTmp;
}

int getMinValIdx(int iArr[], int iStartIdx, int iSize) {
	int iMinIdx;
	int iMinVal;

	iMinVal = iArr[iStartIdx];
	iMinIdx = iStartIdx;
	for (int i = iStartIdx; i < iSize; ++i) {
		if (iMinVal > iArr[i]) {
			iMinVal = iArr[i];
			iMinIdx = i;
		}
	}

	return iMinIdx;
}
void printArray(int iArr[], int iSize) {
	for (int i = 0; i < iSize; ++i) {
		printf("%d ", iArr[i]);
	}
	printf("\n");
}