#define _CRT_SECURE_NO_WARNINGS
#define TRUE 1
#define NULL 0

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
	int iCnt, iRes;

	for (int i = 0; i < 9; ++i) {
		iCnt = i + 1;
		iRes = 5 * iCnt;
		printf("5 x %d = %2d\n", iCnt, iRes);
	}
	printf("\n\n\n");
	for (int i = 1; i <= 9; ++i) {
		printf("5 x %d = %2d\n", i, 5*i);
	}


}



void main00()
{
	int iHiddenNo;
	int iMyNo;
	int iMin, iMax, iRequest;
	srand(time(NULL));
	iHiddenNo = (rand() % 100) + 1;
	//iHiddenNo = 33;
	//printf("Hidden No : %d\n", iHiddenNo);
	iMin = 1;
	iMax = 100;

	while (TRUE) {
		printf("%d~%d 사이의 정수 입력 : ", iMin, iMax);
		scanf("%d", &iMyNo);
		if (iMyNo>=iMin && iMyNo<=iMax) {
			if (iMyNo > iHiddenNo) {
				iMax = iMyNo - 1;
				iRequest = (iMin + iMax) / 2;
				printf("더 작은 수 입력 : 추천 = %d\n", iRequest);
			}
			else if (iMyNo < iHiddenNo) {
				iMin = iMyNo + 1;
				iRequest = (iMin + iMax) / 2;
				printf("더 큰 수 입력 : 추천 = %d\n", iRequest);
			}
			else {
				printf("정답입니다. \n");
				break;
			}
		}
	}
}