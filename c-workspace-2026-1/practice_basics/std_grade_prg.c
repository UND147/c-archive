//학년(1~4)과 점수(0~100)를 입력받아 다음을 판단하는 프로그램 작성
//학년이 1~4가 아니면 오류메시지 출력
//점수가 0~100이 아니면 오류메시지
//1~3학년이고 점수가 60 이상이면 ＂합격입니다＂를 출력, 60 미만이면 "불합격 입니다“를 출력
//4학년이면 점수가 70 이상이면 ＂합격입니다＂를 출력, 70 미만이면 "불합격 입니다“를 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main0()
{
	int iYear, iScore;
	int iCheckYear, iCheckScore;
	int iPassFlag4, iPassFlag123;
	while (1) {
		printf("학년 입력: ");
		scanf("%d", &iYear);

		if (iYear == 0) {
			printf("프로그램종료\n");
			break;
		}
		iCheckYear = (iYear >= 1) && (iYear <= 4);
		if (iCheckYear == 0) {
			printf("[오류] 1~4 사이의 학년을 입력하세요.\n");
			continue;
		}
		while (1) {
			printf("점수 입력: ");
			scanf("%d", &iScore);

			iCheckScore = (iScore >= 0) && (iScore <= 100);

			if (iCheckScore == 1) {
				break;
			}
			else {
				printf("[오류] 1~100 사이의 성적을 입력하세요.\n");
			}
		}

		iPassFlag4 = (iYear == 4) && (iScore >= 70);
		iPassFlag123 = (iYear != 4) && (iScore >= 60);

		if (iPassFlag4 || iPassFlag123) {
			printf("합격입니다\n");
		}
		else {
			printf("불합격 입니다\n");
		}
	}
	return 0;
}