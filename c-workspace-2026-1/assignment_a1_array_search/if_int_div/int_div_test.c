#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 2개 입력
// 분모 0 판단
//			0 이면 - 오류출력
//          0이 아니면
//                      나머지 구함
//						0인지 판단
//							0이면 - 정수 나누기
//							아니면 - 실수 나누기

void main() 
{
	int iNo1, iNo2;
	int iMod, iDiv;
	double dDiv;

	printf("2개 정수 입력 : ");
	scanf("%d %d", &iNo1, &iNo2);

	if (iNo2 == 0) {
		printf("2번째 정수가 0이면 오류...\n");
	}
	else {
		iMod = iNo1% iNo2;
		if (iMod == 0) {
			iDiv = iNo1 / iNo2;
			printf("%d / %d = %d \n", iNo1, iNo2, iDiv);
		}
		else {
			dDiv = (double)iNo1 / iNo2;
			printf("%d / %d = %lf \n", iNo1, iNo2, dDiv);
		}
	}
}