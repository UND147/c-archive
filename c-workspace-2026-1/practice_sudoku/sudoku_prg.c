/*
  4x4 스도쿠
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define ROW_SIZE 4
#define COL_SIZE 4
#define INDEX_SIZE (ROW_SIZE)
void prnSudoku(int iSudoku[][COL_SIZE]);
void checkAndFillRow(int iSudoku[][COL_SIZE]);
void checkAndFillCol(int iSudoku[][COL_SIZE]);
void checkAndFill2x2Grid(int iSudoku[][COL_SIZE]);
int countZeros(int iSudoku[][COL_SIZE]);
// 2x2 grid check
// 데드락 만날 시 해결 필요 >> 백트래킹 추가
int main() {
	int iPrevZeroCnt = -1;
	int iCurrentZeroCnt;
	int iSudoku[ROW_SIZE][COL_SIZE] = 
		{
			{1, 0, 3, 4},
			{0, 4, 1, 0},
			{2, 0, 4, 0},
			{0, 3, 0, 1}
		};

	printf("[초기 상태]\n");
	prnSudoku(iSudoku);

	iCurrentZeroCnt = countZeros(iSudoku);

	while (iCurrentZeroCnt > 0 && iPrevZeroCnt != iCurrentZeroCnt) {
		iPrevZeroCnt = iCurrentZeroCnt;

		checkAndFillRow(iSudoku);
		checkAndFillCol(iSudoku);
		checkAndFill2x2Grid(iSudoku);

		iCurrentZeroCnt = countZeros(iSudoku);
	}
	prnSudoku(iSudoku);

	
	return 0;
}

void prnSudoku(int iSudoku[][COL_SIZE]) {
	printf("-----------------\n");
	for (int i = 0; i < ROW_SIZE; ++i) {
		printf("|");
		for (int j = 0; j < ROW_SIZE; ++j) {
			printf(" %d ", iSudoku[i][j]);
			printf("|");
		}
		printf("\n");
		printf("-----------------\n");
	}


}

void checkAndFillRow(int iSudoku[][COL_SIZE]) {
	for (int k = 0; k < ROW_SIZE; ++k) {
		int iZeroCnt = 0;
		int iRowIndex = 0, iColIndex = 0;
		int iTemp = 0;
		int iValue[INDEX_SIZE] = { 0 };

		for (int l = 0; l < COL_SIZE; ++l) {
			if (iSudoku[k][l] == 0) {
				iZeroCnt++;
				iRowIndex = k;
				iColIndex = l;
			}
			else {
				iValue[(iSudoku[k][l]) - 1]++;
			}
		}
		if (iZeroCnt == 1) {

			for (int s = 0; s < INDEX_SIZE; ++s) {
				if (iValue[s] == 0) {
					iTemp = s + 1;
				}
			}
			iSudoku[iRowIndex][iColIndex] = iTemp;
		}

	}
}
void checkAndFillCol(int iSudoku[][COL_SIZE]) {
	for (int k = 0; k < COL_SIZE; ++k) {
		int iZeroCnt = 0;
		int iRowIndex = 0, iColIndex = 0;
		int iTemp = 0;
		int iValue[INDEX_SIZE] = { 0 };

		for (int l = 0; l < ROW_SIZE; ++l) {
			if (iSudoku[l][k] == 0) {
				iZeroCnt++;
				iRowIndex = l;
				iColIndex = k;
			}
			else {
				iValue[(iSudoku[l][k]) - 1]++;
			}
		}
		if (iZeroCnt == 1) {

			for (int s = 0; s < INDEX_SIZE; ++s) {
				if (iValue[s] == 0) {
					iTemp = s + 1;
				}
			}
			iSudoku[iRowIndex][iColIndex] = iTemp;
		}
	}
}

void checkAndFill2x2Grid(int iSudoku[][COL_SIZE]) {
	int iRowStart, iColStart;
	int iRowGridIndex, iColGridIndex;
	int iCurrentRow, iCurrentCol;
	int iIndex;

	int iZeroCnt;
	int iTargetRow, iTargetCol;
	int iTemp;
	int iValue[ROW_SIZE] = { 0 };

	
	for (iRowStart = 0; iRowStart < ROW_SIZE; iRowStart += 2) {
		for (iColStart = 0; iColStart < COL_SIZE; iColStart += 2) {

			
			iZeroCnt = 0;
			iTargetRow = 0;
			iTargetCol = 0;
			iTemp = 0;

			
			for (iRowGridIndex = 0; iRowGridIndex < 2; iRowGridIndex++) {
				for (iColGridIndex = 0; iColGridIndex < 2; iColGridIndex++) {

					iCurrentRow = iRowStart + iRowGridIndex;
					iCurrentCol = iColStart + iColGridIndex;

					if (iSudoku[iCurrentRow][iCurrentCol] == 0) {
						iZeroCnt++;
						iTargetRow = iCurrentRow;
						iTargetCol = iCurrentCol;
					}
					else {
						iValue[(iSudoku[iCurrentRow][iCurrentCol]) - 1]++;
					}
				}
			}

			if (iZeroCnt == 1) {
				for (iIndex = 0; iIndex < ROW_SIZE; iIndex++) {
					if (iValue[iIndex] == 0) {
						iTemp = iIndex + 1;
					}
				}
				iSudoku[iTargetRow][iTargetCol] = iTemp;
			}
			memset(iValue, 0, sizeof(iValue));
		}
	}
}
// 00 01 10 11 
// 02 03 12 13
// i/j   i/j+1 i+1/j   i+1/j+1
// i/j+2 i/j+3 i+1/j+2 i+1/j+3
// 20 21 30 31 
// 
// 22 23 32 33
int countZeros(int iSudoku[][COL_SIZE]) {
	int iRow, iCol;
	int iZeroCnt = 0;

	for (iRow = 0; iRow < ROW_SIZE; iRow++) {
		for (iCol = 0; iCol < COL_SIZE; iCol++) {
			if (iSudoku[iRow][iCol] == 0) {
				iZeroCnt++;
			}
		}
	}
	return iZeroCnt;
}