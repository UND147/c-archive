#define _CRT_SECURE_NO_WARNINGS
#define TRUE 1 //
#include <stdio.h>
int main() {
	int iScore, iYear;
	int iScoreFlag, iYearFlag;
	int iPassFlag4, iPassFlag123;

	printf("학년과 성적을 입력하시오: ");
	scanf("%d %d", &iYear, &iScore);

	// 학년입력검증
	iYearFlag = (iYear >= 1) && (iYear <= 4);
	// 성적입력검증
	iScoreFlag = (iScore >= 0) && (iScore <= 100);
	if ((iYearFlag == TRUE) && (iScoreFlag == TRUE)) {
		//합격불합격 판단
		iPassFlag123 = (iYear <= 3) && (iScore >= 60);
		iPassFlag4 = (iYear == 4) && (iScore >= 70); // 학년 논리
		if ((iPassFlag123 == TRUE) || (iPassFlag4 == TRUE)) {
			printf("합격입니다");
		}
		else {
			printf("불합격입니다");
		}
	}
	else if (iYearFlag != TRUE) {
		printf("[오류] 학년이 1~4 사이가 아닙니다.");
	}
	else {
		printf("[오류] 점수가 0~100 사이가 아닙니다.");
	}
	
	return 0;
}