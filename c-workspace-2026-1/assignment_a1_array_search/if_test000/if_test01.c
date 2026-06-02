#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int iGrade, iScore;

	printf("학년과 성적입력 : ");
	scanf("%d %d", &iGrade, &iScore);

	if (1 <= iGrade <= 4) {
		printf("GOOD\n");
	}
	else {
		printf("BAD\n");
	}
	/*
	if ( iGrade >= 1 && iGrade <= 4) {
		if (iScore >=0 && iScore <= 100) {
			if (iGrade <= 3 && iScore >= 60) {
				printf("합격입니다\n");
			}
			else if(iGrade==4 && iScore >=70) {
				printf("합격입니다\n");
			}
			else {
				printf("불합격입니다\n");
			}
		}
		else {
			printf("성적은 0~100 사이여야 합니다\n");
		}
	}
	else {
		printf("학년은 1~4 사이여야 합니다\n");
	}
	*/
}