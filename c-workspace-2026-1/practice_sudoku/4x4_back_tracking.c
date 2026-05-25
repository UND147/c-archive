#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

#define ROW_SIZE 4
#define COL_SIZE 4

// --- [1. 함수 선언부 (Declaration)] ---
void PrintSudoku(int iSudoku[ROW_SIZE][COL_SIZE]);
bool IsSafe(int iSudoku[ROW_SIZE][COL_SIZE], int iRow, int iCol, int iNum);
bool SolveSudoku(int iSudoku[ROW_SIZE][COL_SIZE]);


int main() {
    // --- [2. 변수 선언 및 초기화] ---
    // 0은 채워야 할 빈칸을 의미합니다.
    int iSudoku[ROW_SIZE][COL_SIZE] = {
        {0, 3, 4, 1},
        {1, 0, 0, 2},
        {3, 2, 0, 4},
        {0, 1, 2, 3}
    };

    // --- [3. 메인 제어부] ---
    printf("[초기 스도쿠 보드]\n");
    PrintSudoku(iSudoku);

    // 백트래킹 연산 실행 및 결과 출력
    if (SolveSudoku(iSudoku) == true) {
        printf("\n[백트래킹 풀이 완료]\n");
        PrintSudoku(iSudoku);
    }
    else {
        printf("\n풀 수 없는 스도쿠 퍼즐입니다.\n");
    }

    return 0;
}


// --- [4. 기능 모듈 구현부 (Operation & Output)] ---

// 4-1. 스도쿠 보드 출력 모듈
void PrintSudoku(int iSudoku[ROW_SIZE][COL_SIZE]) {
    int iRow = 0;
    int iCol = 0;

    printf("-----------------\n");
    for (iRow = 0; iRow < ROW_SIZE; iRow++) {
        printf("|");
        for (iCol = 0; iCol < COL_SIZE; iCol++) {
            printf(" %d |", iSudoku[iRow][iCol]);
        }
        printf("\n");
        printf("-----------------\n");
    }
}

// 4-2. 규칙 검증 모듈 (가로, 세로, 2x2 블록 중복 체크)
bool IsSafe(int iSudoku[ROW_SIZE][COL_SIZE], int iRow, int iCol, int iNum) {
    int iIdx = 0;
    int iBoxRow = 0;
    int iBoxCol = 0;

    // 해당 칸이 속한 2x2 블록의 시작 인덱스 계산
    int iStartRow = (iRow / 2) * 2;
    int iStartCol = (iCol / 2) * 2;

    // 가로줄 및 세로줄 중복 검사
    for (iIdx = 0; iIdx < ROW_SIZE; iIdx++) {
        if (iSudoku[iRow][iIdx] == iNum) {
            return false;
        }
        if (iSudoku[iIdx][iCol] == iNum) {
            return false;
        }
    }

    // 2x2 블록 내부 중복 검사
    for (iBoxRow = 0; iBoxRow < 2; iBoxRow++) {
        for (iBoxCol = 0; iBoxCol < 2; iBoxCol++) {
            if (iSudoku[iStartRow + iBoxRow][iStartCol + iBoxCol] == iNum) {
                return false;
            }
        }
    }

    return true; // 세 가지 조건을 모두 통과하면 안전함
}

// 4-3. 백트래킹 알고리즘 연산 모듈
bool SolveSudoku(int iSudoku[ROW_SIZE][COL_SIZE]) {
    int iRow = 0;
    int iCol = 0;
    int iNum = 0;
    int iEmptyRow = -1;
    int iEmptyCol = -1;
    bool bIsFindEmpty = false;

    // 1. 빈칸(0) 탐색
    for (iRow = 0; iRow < ROW_SIZE; iRow++) {
        for (iCol = 0; iCol < COL_SIZE; iCol++) {
            if (iSudoku[iRow][iCol] == 0) {
                iEmptyRow = iRow;
                iEmptyCol = iCol;
                bIsFindEmpty = true;
                break;
            }
        }
        if (bIsFindEmpty == true) {
            break;
        }
    }

    // 빈칸이 더 이상 없으면 모든 숫자가 올바르게 채워진 것이므로 탐색 성공
    if (bIsFindEmpty == false) {
        return true;
    }

    // 2. 발견한 빈칸에 1부터 4까지의 숫자 대입 시도
    for (iNum = 0; iNum < 4; iNum++) {
        int iTargetNum = iNum + 1; // 0~3 인덱스를 실제 숫자 1~4로 보정

        // 규칙에 위배되지 않는지 확인
        if (IsSafe(iSudoku, iEmptyRow, iEmptyCol, iTargetNum) == true) {
            iSudoku[iEmptyRow][iEmptyCol] = iTargetNum; // 임시 대입

            // 다음 빈칸을 채우기 위해 재귀 호출 실행
            if (SolveSudoku(iSudoku) == true) {
                return true;
            }

            // 만약 다음 단계에서 실패했다면 현재 대입한 숫자를 취소하고 이전 상태로 복원 (Backtrack)
            iSudoku[iEmptyRow][iEmptyCol] = 0;
        }
    }

    return false; // 1~4 중 어떤 숫자도 들어갈 수 없다면 false 반환
}