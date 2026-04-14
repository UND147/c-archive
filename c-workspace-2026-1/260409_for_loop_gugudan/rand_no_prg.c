// 1부터 100 사이의 난수를 발생하여 변수에 저장
// 사용자로부터 1~100사이의 정수를 입력받아 난수와 같은 수를 입력할 때까지 반복
// 발생된 난수보다 크면 "더 작은 수를 입력하세요" 작으면 " 더 큰 수를 입력하세요" 출력
// BinarySearch
#define _CRT_SECURE_NO_WARNINGS
#define TRUE 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main2() {
	int iNo, iMin, iMax, iHint;
	int iRandNo;

	srand(time(0)); //난수 시드 설정 (현재 시간 기반)
	iRandNo = rand() % 100 + 1; // 1~100 사이의 난수 생성
	
	iMin = 1;
	iMax = 100;
	iNo = 0;

	printf("1~100사이의 정수 맞추기\n");
	while (TRUE) {
		iHint = (iMin + iMax) / 2;
		printf("탐색 범위: [%d ~ %d]  (추천값: %d)\n", iMin, iMax, iHint);
		printf("입력: ");
		scanf("%d", &iNo);

		if (iNo >= 1 && iNo <= 100) { // 정상 로직을 우선

			if (iNo == iRandNo) {
				printf("\n  정답!\n");
				break;

			}
			else if (iNo > iRandNo) {
				iMax = iNo - 1;
				printf("  더 작은 수를 입력하세요. (범위: ~ %d)\n\n", iMax);

			}
			else {
				iMin = iNo + 1;
				printf("  더 큰 수를 입력하세요. (범위: %d ~)\n\n", iMin);
			}
		}
		else {
			printf("[오류] 1~100 범위를 벗어났습니다. 다시 입력하세요.\n\n");
		}
	}

	return 0;
}