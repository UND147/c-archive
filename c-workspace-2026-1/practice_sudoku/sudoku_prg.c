/*
  4x4 스도쿠
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROW_SIZE 4
#define COL_SIZE 4
#define INDEX_SIZE (ROW_SIZE)
void prnSudoku(int iSudoku[][COL_SIZE]);
void checkAndFillRow(int iSudoku[][COL_SIZE]);
void checkAndFillCol(int iSudoku[][COL_SIZE]);
// 2x2 grid check
int main() {
	//1 0 3 4
	//0 4 1 0
	//2 0 4 0
	//0 3 0 1
	int iSudoku[ROW_SIZE][COL_SIZE] = 
		{
		1, 0, 3, 4,
		0, 4, 1, 0,
		2, 0, 4, 0,
		0, 3, 0, 1
		};

	prnSudoku(iSudoku);
	//row check
	checkAndFillRow(iSudoku);
	prnSudoku(iSudoku);
	//col check
	checkAndFillCol(iSudoku);
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